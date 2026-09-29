/* hs.c — solveur homophonique (recuit) avec terme d'entropie/KL anti-dégénérescence
 * casseur-malsburg r1, 2026-09-28 ; r2 : option -f plancher par fenêtre (robustesse au bruit).
 * Modèle : 5-grammes lissés récursivement (Dirichlet, k=KD) sur un corpus a-z continu (i/j, u/v fusionnés).
 * Score = somme ln P(x_j | x_{j-4..j-1})  -  LAMBDA * N * KL(freq_clair || freq_langue)
 * Entrée : jetons séparés par des blancs ; un jeton "|" coupe le contexte (mot codé, nom, clair).
 * -g p : proportion de pas de Gibbs (toutes les lettres pour un symbole).
 * Usage : hs -m corpus.clean -c chiffre.txt [-i iters] [-n restarts] [-l lambda] [-t T0] [-u T1] [-s seed] [-F sym=x,...]
 * Sortie : meilleur score, clé (sym=lettre), clair.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define A 26
#define MAXT 40000
#define MAXS 1000
static float *P5; static double U[A], lU[A];
static char *lab[MAXS]; static int ns=0, tok[MAXT], nt=0, brk[MAXT];
static int key[MAXS], best[MAXS], gbest[MAXS], fixk[MAXS];
static int *occ[MAXS], nocc[MAXS];
static int cnt[A]; static double LAMBDA=1.0, GIBBS=0, FLOOR=-99;
static unsigned long long rs=88172645463325252ULL;
static inline unsigned long long xr(void){rs^=rs<<13;rs^=rs>>7;rs^=rs<<17;return rs;}
static inline double ur(void){return (xr()>>11)*(1.0/9007199254740992.0);}
static int sid(const char*s){for(int i=0;i<ns;i++)if(!strcmp(lab[i],s))return i;lab[ns]=strdup(s);return ns++;}
static void model(const char*fn){
  FILE*f=fopen(fn,"rb"); if(!f){perror(fn);exit(1);} fseek(f,0,2); long n=ftell(f); fseek(f,0,0);
  char*b=malloc(n); n=fread(b,1,n,f); fclose(f);
  long N5=(long)A*A*A*A*A; unsigned *c5=calloc(N5,4);
  long m=0; for(long i=0;i<n;i++) if(b[i]>='a'&&b[i]<='z') b[m++]=b[i]-'a';
  for(long i=4;i<m;i++) c5[(((b[i-4]*A+b[i-3])*A+b[i-2])*A+b[i-1])*A+b[i]]++;
  double *p1=calloc(A,8), *p2=calloc(A*A,8), *p3=calloc(A*A*A,8), *p4=calloc(A*A*A*A,8);
  unsigned *c4=calloc(A*A*A*A,4),*c3=calloc(A*A*A,4),*c2=calloc(A*A,4),*c1=calloc(A,4);
  for(long i=0;i<N5;i++){unsigned v=c5[i]; c4[i%(A*A*A*A)]+=v;} /* suffix counts: last 4 letters */
  for(long i=0;i<A*A*A*A;i++) c3[i%(A*A*A)]+=c4[i];
  for(long i=0;i<A*A*A;i++) c2[i%(A*A)]+=c3[i];
  for(long i=0;i<A*A;i++) c1[i%A]+=c2[i];
  double tot=0; for(int i=0;i<A;i++) tot+=c1[i];
  for(int i=0;i<A;i++){p1[i]=(c1[i]+0.5)/(tot+13); U[i]=p1[i]; lU[i]=log(p1[i]);}
  double KD=2.0;
  /* P(e|h) with h of length k: counts of (h,e) via suffix tables; context totals by summing */
  for(long h=0;h<A;h++){double s=0;for(int e=0;e<A;e++)s+=c2[h*A+e]; for(int e=0;e<A;e++) p2[h*A+e]=(c2[h*A+e]+KD*p1[e])/(s+KD);}
  for(long h=0;h<A*A;h++){double s=0;for(int e=0;e<A;e++)s+=c3[h*A+e]; for(int e=0;e<A;e++) p3[h*A+e]=(c3[h*A+e]+KD*p2[(h%A)*A+e])/(s+KD);}
  for(long h=0;h<A*A*A;h++){double s=0;for(int e=0;e<A;e++)s+=c4[h*A+e]; for(int e=0;e<A;e++) p4[h*A+e]=(c4[h*A+e]+KD*p3[(h%(A*A))*A+e])/(s+KD);}
  P5=malloc(N5*4);
  for(long h=0;h<A*A*A*A;h++){double s=0;for(int e=0;e<A;e++)s+=c5[h*A+e]; for(int e=0;e<A;e++) P5[h*A+e]=(float)log((c5[h*A+e]+KD*p4[(h%(A*A*A))*A+e])/(s+KD));}
  free(c5);free(c4);free(c3);free(c2);free(c1);free(p1);free(p2);free(p3);free(p4);free(b);
}
/* window score at position j: needs 4 previous tokens without break */
static inline double win(int j){
  if(j<4) return 0; for(int q=j-3;q<=j;q++) if(brk[q]) return 0;
  double v=P5[(((key[tok[j-4]]*A+key[tok[j-3]])*A+key[tok[j-2]])*A+key[tok[j-1]])*A+key[tok[j]]];
  return v<FLOOR?FLOOR:v; /* plancher : une fenêtre abîmée par un jeton bruité coûte au plus FLOOR */
}
static double klterm(void){ int N=0; for(int i=0;i<A;i++)N+=cnt[i]; double s=0; for(int i=0;i<A;i++) if(cnt[i]){double p=(double)cnt[i]/N; s+=p*(log(p)-lU[i]);} return LAMBDA*N*s; }
static double full(void){ double s=0; for(int j=0;j<nt;j++) s+=win(j); return s-klterm(); }
static int mark[MAXT], stamp=0;
static double local(int s){ /* sum of windows touching occurrences of s */
  stamp++; double t=0; for(int k=0;k<nocc[s];k++){int p=occ[s][k]; for(int j=p;j<p+5&&j<nt;j++){ if(mark[j]==stamp)continue; mark[j]=stamp; t+=win(j);} } return t; }
int main(int argc,char**argv){
  const char*mf=0,*cf=0,*fx=0; double iters=3e6,T0=1.0,T1=0.05; int R=8; long seed=1;
  for(int i=1;i<argc;i++){
    if(!strcmp(argv[i],"-m"))mf=argv[++i]; else if(!strcmp(argv[i],"-c"))cf=argv[++i];
    else if(!strcmp(argv[i],"-i"))iters=atof(argv[++i]); else if(!strcmp(argv[i],"-n"))R=atoi(argv[++i]);
    else if(!strcmp(argv[i],"-l"))LAMBDA=atof(argv[++i]); else if(!strcmp(argv[i],"-t"))T0=atof(argv[++i]);
    else if(!strcmp(argv[i],"-u"))T1=atof(argv[++i]); else if(!strcmp(argv[i],"-s"))seed=atol(argv[++i]);
    else if(!strcmp(argv[i],"-F"))fx=argv[++i]; else if(!strcmp(argv[i],"-g"))GIBBS=atof(argv[++i]); else if(!strcmp(argv[i],"-f"))FLOOR=atof(argv[++i]); }
  rs+=seed*7919; model(mf);
  FILE*f=fopen(cf,"r"); char w[64]; int pendbrk=1;
  while(fscanf(f,"%63s",w)==1){ if(!strcmp(w,"|")){pendbrk=1;continue;} brk[nt]=pendbrk; pendbrk=0; tok[nt++]=sid(w);} fclose(f);
  for(int s=0;s<ns;s++){nocc[s]=0;fixk[s]=-1;} for(int j=0;j<nt;j++)nocc[tok[j]]++;
  for(int s=0;s<ns;s++){occ[s]=malloc(4*nocc[s]);nocc[s]=0;} for(int j=0;j<nt;j++)occ[tok[j]][nocc[tok[j]]++]=j;
  if(fx){char*d=strdup(fx);for(char*t=strtok(d,",");t;t=strtok(0,",")){char*e=strchr(t,'=');if(!e)continue;*e=0;for(int s=0;s<ns;s++)if(!strcmp(lab[s],t))fixk[s]=e[1]-'a';}}
  fprintf(stderr,"%d jetons, %d symboles\n",nt,ns);
  double gb=-1e18;
  for(int r=0;r<R;r++){
    memset(cnt,0,sizeof cnt);
    for(int s=0;s<ns;s++){ if(fixk[s]>=0)key[s]=fixk[s]; else {double x=ur(),c=0;int l=0;for(;l<A-1;l++){c+=U[l];if(x<c)break;} key[s]=l;} cnt[key[s]]+=nocc[s]; }
    double sc=full(), bs=sc; memcpy(best,key,sizeof(int)*ns);
    long IT=(long)iters;
    for(long it=0;it<IT;it++){
      double T=T0*pow(T1/T0,(double)it/IT);
      int s=xr()%ns; if(fixk[s]>=0)continue; int old=key[s], nw;
      if(GIBBS && ur()<GIBBS){ /* échantillonnage de Gibbs : toutes les lettres pour ce symbole */
        double sc_l[A], mx=-1e300; double base=local(s)+0.0, kb=klterm();
        for(int l=0;l<A;l++){ key[s]=l; cnt[old]-=nocc[s]; cnt[l]+=nocc[s]; sc_l[l]=local(s)-klterm(); cnt[l]-=nocc[s]; cnt[old]+=nocc[s]; if(sc_l[l]>mx)mx=sc_l[l]; }
        double z=0; for(int l=0;l<A;l++){ sc_l[l]=exp((sc_l[l]-mx)/T); z+=sc_l[l]; }
        double x=ur()*z; int l=0; for(;l<A-1;l++){ x-=sc_l[l]; if(x<=0)break; }
        key[s]=old; double d0=(base-kb);
        key[s]=l; cnt[old]-=nocc[s]; cnt[l]+=nocc[s]; double d=local(s)-klterm()-d0; sc+=d;
        if(sc>bs){bs=sc;memcpy(best,key,sizeof(int)*ns);} continue; }
      nw=xr()%A; if(nw==old)continue;
      double kl0=klterm(), l0=local(s);
      key[s]=nw; cnt[old]-=nocc[s]; cnt[nw]+=nocc[s];
      double d=local(s)-l0-(klterm()-kl0);
      if(d>=0||ur()<exp(d/T)){ sc+=d; if(sc>bs){bs=sc;memcpy(best,key,sizeof(int)*ns);} }
      else { key[s]=old; cnt[nw]-=nocc[s]; cnt[old]+=nocc[s]; }
    }
    memcpy(key,best,sizeof(int)*ns); memset(cnt,0,sizeof cnt); for(int s=0;s<ns;s++)cnt[key[s]]+=nocc[s];
    double chk=full();
    fprintf(stderr,"R%d %.1f par_lettre %.3f\n",r,chk,chk/nt);
    if(chk>gb){gb=chk;memcpy(gbest,key,sizeof(int)*ns);}
  }
  memcpy(key,gbest,sizeof(int)*ns);
  printf("SCORE %.2f par_jeton %.4f\nCLE",gb,gb/nt); for(int s=0;s<ns;s++)printf(" %s=%c",lab[s],'a'+key[s]); printf("\nCLAIR ");
  for(int j=0;j<nt;j++){ if(brk[j]&&j)putchar('|'); putchar('a'+key[tok[j]]);} putchar('\n');
  return 0;
}
