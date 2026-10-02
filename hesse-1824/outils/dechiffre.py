#!/usr/bin/env python3
"""Déchiffrement HStAM 9 a Nr. 259 f.249 (1824).
Système (reconstruit) : tableau de Vigenère, alphabet 25 lettres sans j (a..z), prolongé par les chiffres 1,2,3,4...
(indices 25,26,27,28...) ; clé périodique « bcdefg » (clé de la note d'époque) ; décalage = rang(clé)+1 (b=2 ... g=7) ;
clé continue sur tout le texte, chaque caractère chiffré (lettre ou chiffre) consomme une lettre de clé.
Confirmé ensuite (01/10/2026) par le tableau de Vigenère d'époque du même dossier (fol. 237) : alphabet cyclique de 35 signes
« 0 a b ... x ÿ z 1 ... 9 », période 35 ; pour un clair en lettres, aucun bouclage n'intervient (indice max z + g = 32 < 35).
chiffre = alphabet[rang(clair)+décalage] ; clair = rang(chiffre) - décalage.
Usage : python3 dechiffre.py [transcription]  (défaut f249/chiffre.txt ; G = glyphe ambigu, forcé g)."""
import sys
A='abcdefghiklmnopqrstuvwxyz'
EXT=A+'123456789'
KEY='bcdefg'
OMIS={(2,3)}  # (ligne, rang du signe chiffré) avant lequel le copiste a omis un signe (« wo n[i]cht ») : 1 lettre de clé consommée
def dechiffre(lignes, phase0=0, detail=False):
    i=phase0; out=[]
    for n,t in enumerate(lignes,1):
        o=[]; r=0
        for ch in t:
            c=ch.replace('G','g').replace('ÿ','y').replace('ſ','s')
            if c in EXT:
                if (n,r) in OMIS: o.append('_'); i+=1
                r+=1
                s=A.index(KEY[i%6])+1
                p=EXT.index(c)-s
                o.append(A[p] if 0<=p<25 else '#'); i+=1
            else: o.append(ch)
        out.append(''.join(o))
    return out
if __name__=='__main__':
    f=sys.argv[1] if len(sys.argv)>1 else 'f249/chiffre.txt'
    L=[l.split(':',1)[1].strip() for l in open(f) if l[:1]=='L' and ':' in l]
    for c,p in zip(L,dechiffre(L)): print(c); print(p); print()
