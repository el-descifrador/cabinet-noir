# « Snell an St.. » (1824) : message chiffré de la Demagogenverfolgung

**Hessisches Staatsarchiv Marburg, 9 a Nr. 259, f.249 (20/2/1824) — résultat n°51. Étiquette : « lecture avec clé d'époque » (clé et règle données par la note du déchiffreur de 1824).
Confirmé avec réserves par un vérificateur indépendant : 157/170 = 92,4 % des lettres, 22/32 = 68,8 % des mots (réserve : fautes de copie).
Système confirmé (01/10/2026) par le tableau de Vigenère d'époque conservé dans le même dossier, fol. 237 (§ 2 bis) ; taux inchangés.**

## Antériorité et lecture parallèle (à lire d'abord)

Ce message a été lu **en parallèle et indépendamment** par le projet public **dbourdeau/cyphersolver**, qui a **publié sa lecture le premier** le 29/09/2026
(dossier `targets/hesse1824`, même méthode : clé *bcdefg* tirée de la note du déchiffreur d'époque). Notre lecture date du 28/09/2026 et n'était pas publiée.
Nous ne revendiquons **aucune priorité** ; notre lecture, vérifiée de façon indépendante, vaut confirmation.
Référence : https://github.com/dbourdeau/cyphersolver/tree/main/targets/hesse1824

## Résumé

Le portail HCPortal (notice 513, « Polyalphabetic », statut « **Not solved** ») publie l'image du f.249 du dossier HStAM 9 a Nr. 259, daté du 20/2/1824. La page porte
un en-tête « Snell an St.. », **six lignes chiffrées** (lettres cursives et chiffres 1, 3, 4) et une **« Anmerkung »** en Kurrent : le déchiffreur y explique que le
message était écrit à l'encre sympathique entre les lignes d'une lettre anodine, qu'il n'arrivait pas à le lire avec le tableau (« Schlüssel ») joint, puis qu'il a
trouvé, « durch hundertfache Versuche », que *bcdefg* sont les lettres-clés à poser en continu au-dessus du chiffre ; il donne l'exemple des sept premières lettres
(« Schickt »). Un concurrent (cipher-lab, 26/09) avait transcrit la page et vu la note sans l'appliquer ; ses essais à l'aveugle (Vigenère de périodes 6, 7 et 16,
monoalphabétique, homophone) étaient négatifs.

Le casseur a reconstruit le tableau (Vigenère sur un alphabet de 25 lettres sans j, prolongé par les chiffres 1, 2, 3… au-delà de z), établi que la clé court aussi
sur les chiffres et repéré un signe omis. Le vérificateur a refait une transcription à l'aveugle, reproduit la méthode avec ses propres scripts et montré que **seul ce
système donne de l'allemand**. Le texte pose des questions sur **Paul Follen et l'Amérique**, sur **Fries, Oken et de Wette**, et sur les suites de **la découverte
« de ce plan » à Wetzlar** : le « Plan » est très probablement la *Denkschrift* de Karl Follen sur l'émigration des démocrates allemands en Amérique, saisie chez
Ludwig Snell à Wetzlar le 9/1/1820.

---

## 1. Le document

| | |
|---|---|
| **Cote** | Hessisches Staatsarchiv Marburg (HStAM), **9 a Nr. 259, f.249** |
| **HCPortal** | notice **513**, image : https://api.hcportal.eu/media/1439/17901677521692.jpg (original 2928 × 4416 px) ; « Polyalphabetic », « Not solved », date 1824-02-20 |
| **En-tête** | « Snell an St.. » (destinataire mal lisible) |
| **Chiffre** | 6 lignes, **170 lettres de clair** (32 mots) ; lettres latines cursives + chiffres 1, 3, 4 ; ponctuation «. » et « ? » |
| **Note d'époque** | « Anmerkung » en Kurrent sous le chiffre : mode d'écriture (encre sympathique « No. 1 », entre les lignes d'un « ganz gleichgültigen Brief »), clé *bcdefg*, règle, exemple |
| **Tableau** | le « untenstehender Schlüssel » dont parle la note n'est pas sur l'image de f.249 ; il est conservé dans le **même dossier, fol. 237** (Arcinsys Hessen, image 248 : https://digitalisate-he.arcinsys.de/hstam/9_a/259/hstam_9_a_nr_259_0248.jpg), repéré le 01/10/2026, après la lecture : voir § 2 bis |
| **Étendue** | **complétude NON prouvée** : la note dit « Auf diese Art sind **zwey Seiten voll** » et le texte parle de « **dieses** Plans » comme d'une chose déjà nommée ; f.249 est une copie du « Concept », **peut-être un extrait** |
| **Pièces voisines** | sur HCPortal, seules 9 a Nr. 258 f.16 et f.25 (notices 511-512, chiffre télégraphique monoalphabétique, « Solved ») : sans rapport. f.249v-250 non publiés |

## 2. Le système (reconstruit ; aucun paramètre libre)

- **Alphabet de 25 lettres sans j** : a b c d e f g h i k l m n o p q r s t u v w x y z (rangs 0 à 24), **prolongé sans bouclage par les chiffres** : rang 25 = 1, 26 = 2,
 27 = 3, 28 = 4… (avec une clé qui ne dépasse pas g, jamais plus de 7).
- **Clé périodique *bcdefg*** (celle de la note), appliquée **en continu** sur tout le texte : les lettres **et les chiffres** consomment une lettre de clé, la ponctuation non.
- **Décalage = rang de la lettre-clé + 1** (b → 2, c → 3 … g → 7), déduit de l'exemple d'époque : u − 2 = s, f − 3 = c, m − 4 = h, o − 5 = i, q − 6 = k.
 **chiffre = ALPHA[rang(clair) + décalage]** ; clair = rang(chiffre) − décalage. Ex. : w sous g → 21 + 7 = 28 → « 4 » (d'où « 4as » = Was, « 4g3 » = Wez[lar]).
- **Un signe omis** par le copiste en ligne 2 (« wo n[i]cht ») : un balayage (insertion d'un signe fantôme à chaque position, ) montre que la ligne 2 ne devient
 lisible que si le signe manque à cet endroit, à une position près.
- **Alternatives testées par le vérificateur** (score trigramme allemand, ) : même système sans l'omission (−5,85), chiffres ne consommant pas de clé (−5,51),
 alphabet de 26 lettres (−5,14), Beaufort (−6,39), décalage = rang sans + 1 (−6,32), contre **−3,77** pour le système annoncé ; balayage complet (25/26 lettres ×
 Vigenère/Beaufort/variante × décalages × traitement des chiffres) : **seul le système annoncé donne de l'allemand**. Bouclage modulo 29 ou non : indécidable (un seul
 signe fautif concerné), sans effet sur la lecture. *Question tranchée depuis par le tableau d'époque (§ 2 bis) : alphabet cyclique de 35 signes, modulo 29 réfuté.*

## 2 bis. Le tableau d'époque (fol. 237) : une prédiction vérifiée (01/10/2026)

- **Trouvaille** : le dossier HStAM 9 a Nr. 259 complet (322 images sur Arcinsys Hessen) a été parcouru le 01/10/2026. L'image 248 = **fol. 237**, un **tableau de Vigenère**
 intitulé « Zero » : c'est le « untenstehender Schlüssel » dont parle la note de f.249 (https://digitalisate-he.arcinsys.de/hstam/9_a/259/hstam_9_a_nr_259_0248.jpg). L'image 250 = **fol. 238**, « Rezepte zu
 sympathetischen Tinten » (n°1 « Extracti Saturni », qui répond à l'encre « No. 1 (extr. Sat.) » de la note ; relevé lors du repérage, non contrôlé par le vérificateur).
- **Contrôle** (vérificateur indépendant, contexte frais) : relevé de la grille et nouveau déchiffrement de f.249 par **recherche littérale dans la grille**, sans rien modifier
 à la lecture.
  - Grille de **36 × 36**, alphabet cyclique de **35 signes** : `0 a b c d e f g h i k l m n o p q r s t u v w x ÿ z 1 2 3 4 5 6 7 8 9` (25 lettres, **sans j**, y écrit ÿ
 entre x et z), **période 35** ; chaque ligne décalée d'un cran ; colonnes 0 à g (celles de la clé bcdefg) et coins vérifiés au zoom, sans faute de copie (les autres cases,
 inutiles avec cette clé, n'ont été vues qu'à 800 px).
  - Le **décalage « rang + 1 »**, déduit de l'exemple d'époque, s'explique : la ligne du haut **commence par 0**, donc b est en colonne 2, …, g en 7.
  - L'**ordre du débordement** (z, 1, 2, …) est celui du tableau ; l'alphabet sans j et la place de ÿ sont confirmés.
  - **Bouclage** : pour un clair en lettres, l'indice maximal est z + g = 32 < 35 : le chiffreur n'a jamais eu à boucler. Partout où notre système donne une lettre, le tableau
 donne la même ; les seules divergences (54 couples sur 35 × 6) sont des cas où notre système donne « # » et le tableau un chiffre, possibles seulement pour un clair en chiffres
 (aucun dans f.249). **Modulo 29 réfuté.**
- **Nouveau déchiffrement de f.249** : 1 seule position divergente sur la transcription de référence (« fragen » : tableau `frh0en`, notre système `frh#en`, déjà compté fautif ;
 l'interversion ld/dl reste la seule explication) ; la confusion **2/z** de « wegen » est confirmée ; aucune anomalie ne vient d'une confusion 1/i. **Taux inchangés** :
 157/170 = 92,4 % des lettres, 22/32 = 68,8 % des mots (aveugle 91,2 / 62,5 ; casseur 91,8 / 65,6).
- **Portée** : la reconstruction du 28/09/2026 a été faite **sans voir** ce tableau ; un document indépendant la confirme point par point. Cela **renforce la confiance dans la
 lecture** ; cela retire en revanche « la reconstruction du tableau » de notre apport propre. L'étiquette ne change pas : **lecture avec clé et méthode d'époque**, pas une percée.

## 3. Transcription et contrôles

- **Transcription du casseur** : lecture glyphe par glyphe, sans correction.
- **Transcription aveugle du vérificateur**, gelée à 17:57 UTC avant ouverture des fichiers du casseur :
 **163/169 signes identiques**. Écarts tranchés sur la forme : L3 « **e**rlÿlfe » (le casseur lisait c : **erreur du casseur**, « America » passe alors sans faute) ;
 L2, majuscule surmontée d'une brève = illisible pour les deux (J ? ſ ?) ; quatre écarts g/q ou r/v = erreurs de l'aveugle (critère : g à descendante bouclée, q droite,
 fixé sur L1-L4 puis appliqué à L5-L6 ; relecture faite en connaissant les valeurs attendues, **déclaré**).
- **Transcription de référence** = celle du casseur, sauf e en L3 et J? en L2.

```
L1: ufmoqmv. onxiplql. tkmt. huslu. cqh. kxu kmiwomt
L2: zsskkw fkguvzswzm. J?mixl ntldkt.
L3: 4cv. mfz. wcxp. lusnhr. zlogz erlÿlfe.
L4: 1uw. hunkÿ vmhr il4. gwxk. nm krvÿ ?
L5: ohvwi ipm ixkl pufxrm kqqvix vscqu ot
L6: 4g3. pfx. tguoqpkkh. ktroqg ?
```

## 4. Texte lu

**Déchiffrement brut** (transcription aveugle du vérificateur, sans aucune correction ; `_` = signe omis ou illisible, `#` = signe fautif) :
```
schiket lisching oder eqnen and ern hierher / won_cht beantworte _iese frh#en
was hat paul follen uegew america / vop fries oken dew ette ge hort
hatte die guff indung dieses planq in / wez lar merkliche folgod
```

**Lecture** († = mot non compris en mesure sévère, § 5) :
> Schicket Lisching oder einen† andern hierher. Wo nicht†, beantworte diese† Fragen†. Was hat Paul Follen wegen† America ? Von† Fries, Oken, de Wette gehört ?
> Hatte die Auffindung† dieses† Plans† in Wezlar merkliche Folgen† ?

**Traduction (sous réserve)** : « Envoyez Lisching ou un autre ici. Sinon, réponds à ces questions : qu'en est-il de Paul Follen au sujet de l'Amérique ? [Qu'a-t-on]
appris de Fries, Oken, de Wette ? La découverte de ce plan à Wetzlar a-t-elle eu des conséquences notables ? »

- La **ligne 1 sort sans aucune correction** (37 lettres). Les noms **Paul Follen, Fries, Oken, de Wette, America, Wezlar** sortent directement du déchiffrement : ils ne
 peuvent pas venir du hasard.
- « schiket » (= schicket) et « **Lisching** » : déchiffrement brut exact ; l'interprétation (nom propre, HYP Liesching, famille de Stuttgart, **sans aucune source**) reste
 une hypothèse.

## 5. Mesure (scripts du vérificateur,, )

Clair attendu aligné signe à signe (170 lettres, 32 mots). **Compris** : seule la lettre que le signe lu donne tel quel ; toute correction de copiste, tout signe omis
ou illisible = non compris.

| Transcription | Lettres | Mots |
|---|---|---|
| **v2 relue (RÉFÉRENCE)** | **157/170 = 92,4 %** | **22/32 = 68,8 %** |
| aveugle gelée, brute | 155/170 = 91,2 % | 20/32 = 62,5 % |
| v2 pessimiste (« schiket » et « Lisching » comptés HYP) | 142/170 = 83,5 % | 20/32 = 62,5 % |
| casseur (chiffres reproduits par le vérificateur) | 156/170 = 91,8 % | 21/32 = 65,6 % |

**Les 13 anomalies de la référence** (10 mots), toutes compatibles avec une copie faite d'après un original à l'encre sympathique : einen (u pour n) ; nicht (i omis) ;
diese (majuscule illisible pour f) ; fragen (**ld pour dl**, interversion) ; wegen (**z pour le chiffre 2**, et z pour q) ; von (w pour u) ; Auffindung (i pour c) ;
dieses (q pour g) ; Plans (u pour w) ; Folgen (**qg pour gq**, interversion).

## 6. Contexte (d'après le vérificateur ; hypothèses signalées)

- **Le « Plan » de Wetzlar** : la *Denkschrift* de Karl Follen (fin 1819) sur l'émigration collective des démocrates allemands en Amérique du Nord, saisie le
 **9 janvier 1820** à Wetzlar lors de l'arrestation de **Ludwig Snell**, directeur du gymnase et confident de Follen (source : *Mitteilungen des Deutschen
 Pionier-Vereins von Philadelphia*, 1906-07, d'après *Der Freidenker* du 11/8/1907 ; OCR IA `mitteilungendesd00deut`). Les deux questions « Paul Follen wegen
 America » et « Auffindung dieses Plans in Wezlar » s'accordent **exactement** avec ce fait, indépendant du déchiffrement.
- **Paul Follen(ius)**, frère cadet de Karl, avocat à Giessen, reprendra le projet américain (départ en 1834 avec la Giessener Auswanderungsgesellschaft). En 1824,
 Karl est réfugié en Suisse et s'embarque pour l'Amérique à la fin de l'année.
- **Fries, Oken, de Wette** : trois professeurs frappés en 1819 (Fries et Oken à Iéna, de Wette révoqué à Berlin, à Bâle depuis 1822) ; 1824 = reprise des enquêtes de la
 Mainzer Zentraluntersuchungskommission. Encre sympathique et message intercepté : typique des dossiers de police de la Demagogenverfolgung.
- **« Snell an St.. »** : Ludwig Snell ou Wilhelm Snell (à Bâle depuis 1821) — **HYP** ; destinataire non lu.

## 7. Nouveauté : apport FAIBLE ; lecture publiée d'abord par un tiers (voir « Antériorité ») ; « non trouvé » ≠ « inédit »

- **Ce n'est pas une percée** : la page porte la clé, la règle, un exemple déchiffré (7 premiers signes, dont 6 justes selon notre modèle) et l'aveu du déchiffreur de 1824
 qu'il y est parvenu ; le tableau qu'il cite est conservé dans le même dossier (fol. 237, § 2 bis). **Un déchiffrement complet d'époque a très probablement existé** ;
 le parcours du dossier complet (01/10/2026, sur vignettes ; les pages de tables n'ont pas toutes été vues en pleine taille) n'en a pas repéré, ni aucun autre message chiffré :
 il peut se trouver dans les rapports d'enquête.
- **Rien trouvé imprimé** : Internet Archive plein texte (« Lisching oder einen andern », « schicket Lisching », « beantworte diese Fragen » + Snell, « zwischen die Linien
 eines ganz », « Snell » + « sympathetische Tinte ») : 0 ; Spindler, *Karl Follen* (1917) : aucun passage sur un chiffre ; Arcinsys / Archivportal-D : description du
 dossier non obtenue.
- **Trous** : Google Books (réponse **429**, quota épuisé, pas de nouvel essai) et scholar.archive.org (page anti-robot, **non contournée**) **non consultés** ; biographies
 de L. et W. Snell, rapports de la commission de Mayence non vus.
- **Concurrents** : cipher-lab (transcription du 26/09, note vue mais non appliquée, essais aveugles négatifs, cible « partial ») ; cyphersolver et
 unsolved-ciphers : catalogues.
- **Formule** : « première lecture moderne connue de nous, avec la clé et la méthode d'époque données sur la page ». Jamais « découverte » ni « clé cassée ».
 Depuis le 01/10/2026, la reconstruction du tableau n'est plus un apport propre : le tableau d'époque existe (fol. 237).

## 8. Réserves

1. **Clé d'époque** : pas une percée ; le mérite de la clé revient au déchiffreur de 1824.
2. **Taux au mot 68,8 % < 80 %** : 10 mots portent une faute de copie (dont deux interversions et une confusion 2/z).
3. **Complétude non prouvée** : « zwey Seiten voll » ; f.249 peut n'être qu'un extrait.
4. Tableau d'époque : vu **après** la lecture (fol. 237, § 2 bis) ; il confirme point par point la reconstruction (25 lettres sans j + débordement en chiffres, décalage rang + 1),
 contrôlée au zoom sur les colonnes utiles (0 à g).
5. La transcription de référence intègre la correction du vérificateur (L3 « erlÿlfe », et non « crlÿlfe »).
6. Identifications (Lisching, Snell expéditeur, destinataire) = HYP ; aucune relecture humaine de l'image ni de la note en Kurrent.

## 9. Reproduire

```
python3 outils/dechiffre.py f249/chiffre.txt   # clé bcdefg, alphabet 25 lettres + chiffres, clé continue ; signe omis en ligne 2
```
(`outils/dechiffre.py` : licence MIT.)

## Sources

- Hessisches Staatsarchiv Marburg, 9 a Nr. 259, fol. 237 (tableau de Vigenère d'époque) : Arcinsys Hessen, image 248, https://digitalisate-he.arcinsys.de/hstam/9_a/259/hstam_9_a_nr_259_0248.jpg
- Hessisches Staatsarchiv Marburg, 9 a Nr. 259, f.249 ; HCPortal notice 513 (https://api.hcportal.eu/api/cryptograms/513), image https://api.hcportal.eu/media/1439/17901677521692.jpg
- Lecture parallèle : dbourdeau/cyphersolver, `targets/hesse1824` (publiée le 29/09/2026).
