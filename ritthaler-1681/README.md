# Michael Ritthaler au duc Rodolphe-Auguste de Brunswick-Wolfenbüttel (Wolfenbüttel, octobre-décembre 1681) : trois brouillons latins chiffrés

**Herzog August Bibliothek Wolfenbüttel, Cod. Guelf. 252.2 Extrav. — résultats n°80, n°81 et n°83. Étiquette : « clé reconstruite par nous depuis une paire d'époque
du même volume » ; chiffre TRIVIAL ; intérêt historique modeste.**

Le chiffre est une simple substitution **réciproque** (involution) qui garde les mots, la casse et la ponctuation. Il n'a **aucun mérite cryptanalytique** : il se lit
presque à vue une fois la paire glosée repérée. L'apport se limite au repérage de la paire, à la reconstruction de la clé, à la transcription et à la lecture de
passages que l'auteur voulait soustraire aux regards. Chaque lettre a été **confirmée avec réserves** par un vérificateur indépendant (un par lettre).

| résultat | pièce | date | taux (vérificateur, par mot ; aucun code) | réserves | nouveauté |
|---|---|---|---|---|---|
| résultat n°80 | [f148r](f148r/) : fol. 148r (vue 00303), 15 lignes chiffrées, 73 mots | « ipsis Cal. Novembr. » [1/11/1681] | **84,9 %** ; stricte 83,6 % ; empilement maximal 78,9 % | lecture non aveugle au sens strict ; brouillon | A prov. |
| résultat n°81 | [f147r-v](f147r-v/) : fol. 147r bas - 147v haut (vues 00301-00302), 57 mots | [≈ 28/10/1681] | **89,5 %** ; stricte 84,2 % ; empilement maximal 77,6 % | court ; date en partie déduite | A prov. |
| résultat n°83 | [f154r-v](f154r-v/) : fol. 154r bas - 154v haut (vues 00315-00316), 28 mots | 29/12/[1681] | **89,3 %** ; **stricte 75,0 %** ; empilement maximal 66,7 % | **FORTES** : très court, stricte < 80 %, contamination déclarée du vérificateur | A prov. |

Images (liens seulement, aucune image copiée) : bibliothèque numérique de la HAB, accès libre ; visionneuse `https://diglib.hab.de/mss/252-2-extrav/start.htm?image=00NNN`,
pleine résolution `https://diglib.hab.de/mss/252-2-extrav/max/00NNN.jpg` (147r = 00301, 147v = 00302, 148r = 00303, 154r = 00315, 154v = 00316, 163v = 00334, 164r = 00335).

## Résumé

Le Cod. Guelf. 252.2 Extrav. réunit des **brouillons** de lettres de **Michael Ritthaler** (1641-1685), théologien, nommé bibliothécaire par le duc **Rodolphe-Auguste**
en 1680, qui ne dirige effectivement la bibliothèque ducale qu'à partir de 1682, après la mort de son prédécesseur **David Hanisius** (juin 1681). Le catalogue
d'Otte signale « Mehrere Briefe chiffriert, davon einer (163v) mit Entschlüsselung ».

La lettre du fol. 163v-164r (28 février [1682]) porte une **glose interlinéaire mot à mot** : elle a fourni la clé. Trois brouillons au duc, sans glose, passent
ensuite le seuil. Ils racontent l'installation de Ritthaler **au château de Wolfenbüttel** à l'automne 1681 (logement « in arce », remise des clés, nouveau « museum »)
et, à Noël, un remerciement pour un legs de **six chemises** tiré de la succession Hanisius. Chacun contient ou accompagne un **chronogramme** qui donne 1681.
Le chiffre protège des affaires **privées et domestiques**, pas des secrets d'État.

## 1. La clé

- **Paire d'époque** : fol. 163v bas - 164r haut, lettre au duc « Dabam Guelpherbyti pridie Cal. Martii » [1682] ; glose mot à mot (sous la ligne en 163v, au-dessus en 164r).
  Lecture de la paire : [cle/paire_163v-164r.tsv](cle/paire_163v-164r.tsv).
- **Clé** : a↔e, i↔y, o↔u, b↔p, c↔g, d↔t, f↔s, l↔r, m↔n, v↔w, x↔z ; q/k ; h et j invariants. Reconstruite par l'équipe (gelée le 29/09/2026 23:34:06Z, avant
  l'ouverture de toute autre lettre chiffrée, jamais modifiée) et, **seul**, par le premier vérificateur (gelée le 30/09/2026 19:06:54Z) : **accord sur 100 % des valeurs**.
  Les vérificateurs suivants ont réutilisé la clé du premier vérificateur. Fichier : [cle/cle_ritthaler.tsv](cle/cle_ritthaler.tsv).
- **Points faibles** : **K** vaut q 7 fois et c/k 3 fois dans la paire (signe **double** : tout mot qui le contient est compté non compris) ; **x** n'est pas attesté
  comme signe chiffré (hypothèse par réciprocité) ; **j** attesté une fois ; anomalies de la paire (g→g dans « Kederugon/Kederuguf » = Catalogum/catalogos).
- **Graphie** : ſ long chiffré = f clair, f barré chiffré = s clair ; cette distinction est indispensable (« ſalen » = feram).

## 2. Méthode

1. Clé gelée, puis transcription gelée de chaque lettre avant tout déchiffrement ; pour 147r et 154r, une deuxième transcription par un lecteur **aveugle** sans clé.
2. Pour chaque lettre, un **vérificateur frais** gèle sa règle de mesure, fait sa propre transcription, la gèle, annonce son taux **avant** d'ouvrir le travail de l'équipe ;
   mesure par script testé sur un exemple synthétique.
3. Mesure **par mot** (le chiffre garde les mots) ; ratures exclues ; glyphe douteux, signe double, lettre absente de la paire, graphie contraire à la clé = non compris ;
   variante **stricte** = union des doutes de tous les transcripteurs. Aucun code de nomenclateur : le taux des mots épelés est égal au taux par mot.
4. **Limite commune, la principale réserve** : avec une involution aussi simple, le transcripteur **lit le latin en transcrivant**. L'aveuglement n'est que formel.
   Parade : glyphes douteux marqués à l'image et comptés non compris ; graphies fautives laissées telles quelles.

## 3. Lettres

- [f147r-v/lecture.md](f147r-v/lecture.md) — résultat n°81 : remerciement pour le salaire et le logement au château ; chronogramme « Mens, Da CLara sonos ! en arX te saXea teXIt » (1681).
- [f148r/lecture.md](f148r/lecture.md) — résultat n°80 : offre d'un logement au château et des clés ; hésitation, puis acceptation ; « Mors et Mars minantur ».
- [f154r-v/lecture.md](f154r-v/lecture.md) — résultat n°83 : vœux de Noël et remerciement pour six chemises de la succession Hanisius.

Chaque dossier contient `chiffre.txt` (transcription du vérificateur), `dechiffrement.txt` (décodage et jugement de chaque mot, sortie du script de mesure) et `lecture.md`.

**Non inclus** (lectures partielles, non comptées) : fol. 158v (16/1/1682, lettre mixte : 80,6 % au seuil exact mais stricte 67,7 %), fol. 120v (lettre entièrement
chiffrée, ≈ 77 %), fol. 147r haut (dernière phrase de la lettre du 21/10/1681, 7 mots sur 13).

## 4. Réserves communes

1. Chiffre trivial : ce sont des lectures, pas des cassages ; aucun mérite cryptanalytique.
2. Lecture non aveugle au sens strict (le clair se voit en transcrivant).
3. Brouillons : ratures, insertions, transpositions ; la lettre envoyée a pu différer.
4. Petits dénominateurs (73, 57, 28 mots).
5. K double ; j et x peu ou pas attestés dans la paire.
6. **Nouveauté** : aucune édition ni lecture de ces lettres trouvée (dépôts publics, ≈ 10 recherches web, de.wikipedia, PRDL). Le catalogue d'Otte signale les lettres
   chiffrées et la paire glosée ; un chiffre aussi simple a pu être lu par un historien de la HAB. « Non trouvé » ≠ « inédit ».

## 5. Sources

- Herzog August Bibliothek Wolfenbüttel, Cod. Guelf. 252.2 Extrav. ; H. Otte, *Die neueren Handschriften der Gruppe Extravagantes*, Teil 3 (lettres au duc Rodolphe-Auguste 1681-1683, fol. 103r-166r).
- Michael Ritthaler : https://de.wikipedia.org/wiki/Michael_Ritthaler ; https://www.prdl.org/author_view.php?a_id=1603
- David Hanisius : https://de.wikipedia.org/wiki/David_Hanisius
