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
