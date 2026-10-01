# Charles X Gustave à la régence de Brême-Verden (Stettin, 4 juillet 1657) : une clé homophone cassée à l'aveugle

**Niedersächsisches Landesarchiv, Abt. Stade, Rep. 5a Nr. 636 — résultat n°77. Étiquette : « clé cassée par nous à l'aveugle, validée par un original en clair d'époque »**
(aucune clé, aucune glose, aucun texte parallèle n'a servi au cassage). **Confirmé avec réserves** par un vérificateur indépendant.

| résultat n° | pièce | date | taux (vérificateur, mesure sévère) | réserves | nouveauté |
|---|---|---|---|---|---|
| 77 | Rep. 5a Nr. 636, fol. 115r (L2), passages chiffrés, 140 groupes | 04/07/1657 | **85,7 % par groupe / 31,6 % par mot** (transcription à l'aveugle du vérificateur ; 90,0 % / 42,1 % avec ses lectures alternatives notées avant le gel) | **mot < 80 %** (mots du répertoire > 99 non établis) ; 27 et 64 contredits par le sens ; clair de L2 inconnu | A prov. |

Images (liens seulement) : Arcinsys Niedersachsen, NLA ST Rep. 5a Nr. 636, detailid v7195857 — https://www.arcinsys.niedersachsen.de/arcinsys/detailAction?detailid=v7195857 (microfilm numérisé ; L2 = vue 113).

## Résumé

Le volume Rep. 5a Nr. 636 des archives de Stade (gouvernement suédois des duchés de Brême et de Verden) réunit des lettres de Charles X Gustave à la régence
de Stade pendant l'invasion danoise de 1657. L'index du XIXᵉ siècle les décrit « meist in Chiffern ». Ce sont des lettres en allemand dont les passages
sensibles sont **chiffrés en nombres**, sans aucun déchiffrement ni glose.

Trois pièces chiffrées ont été transcrites :

| id | folio | pièce | groupes | rôle |
|---|---|---|---|---|
| L1 | fol. 113r-v | Stettin, 3/7/1657 | 432 | entraînement du solveur |
| **L2** | **fol. 115r** | **Stettin, 4/7/1657** | **140** | **test fermé (résultat n°77)** |
| L3 | fol. 116r-117r | « Doublet », Bromberg, 24/6/1657 (autre main) | 660 | entraînement ; son original **en clair** est au fol. 118r-v |

Contenu de L2 : pour réfuter le **Manifeste danois**, dont le premier article accuse les « Königliche Schwedische Waffen » d'avoir occupé des places dans
« unser Herzogthumb Bremen », le roi a besoin d'une information de fond ; rien ne se trouve à la chancellerie royale, et la régence doit lui envoyer un rapport
avec les « gehörige documenta ».

## 1. Le chiffre

Homophone allemand : nombres 1-99 pour les lettres, rangés **alphabétiquement par pas de 5** (a 5/10/15/20, b 25/30/35, c 40-55, d 60-70, e 75-95…), plus un
répertoire au-delà de 99 : doubles lettres (106 ff, 111/112 ll, 113 mm, 121/122 ss), groupes (125-127 st, 130 sch) et mots (181, 193…, non établis).
Cette structure alphabétique n'est pas imposée par le solveur : elle est apparue dans la clé qu'il a trouvée, ce qui est un contrôle interne.

**Clé** : [cle/karlgustav1657_v2.tsv](cle/karlgustav1657_v2.tsv) (clé figée v2 ; statut et nombre d'occurrences d'entraînement pour chaque valeur).

## 2. Méthode

1. Transcription de L1, L2 et L3 sur les images du microfilm (3 276 px).
2. **Solveur homophone** (recuit simulé sur n-grammes allemands) sur L1 + L3 seulement ; plusieurs graines convergent vers le même optimum.
3. **Clé figée** (empreinte + horodatage, 29/09/2026 18:51:55Z) avec une prédiction, **avant** tout décodage de L2.
4. Décodage de L2 avec la clé figée, sans aucun réajustement ; mesure sévère.

## 3. Vérification indépendante

| contrôle | résultat |
|---|---|
| Transcription de L2 **à l'aveugle** par le vérificateur | accord de glyphes 96,4 % ; sur les 2 désaccords de fond, sa lecture donne le bon sens avec la clé figée (130 = sch → *schwedische* ; 16 = o → *occupiret*) : la transcription n'a pas été ajustée à la clé |
| **Mesure sévère de L2** (script du vérificateur) | **85,7 % par groupe (120/140) / 31,6 % par mot** ; 90,0 % / 42,1 % avec ses lectures alternatives notées avant le gel ; 84,3 % en ultra-strict |
| Sortie brute du solveur sur L2, sans arbitrage humain | 93,0 % des groupes 1-99 conformes à la lecture |
| Reproduction du solveur | nouvelles graines : même optimum, clé identique ; sur L1 seul, 91,3 % des jetons identiques à la clé figée |
| **Contrôle d'époque** : déchiffrement de L3 ↔ original en clair du fol. 118r | 65/68 mots concordants (95,6 % ; 40 identiques). Le fol. 118 a été téléchargé **après** le gel ; les variantes réelles (*zuschreibet* / *überschreibt*) montrent que le déchiffrement n'est pas calqué |
| Unicité | ≈ 138 lettres ; l'entraînement représente ≈ 7,6 fois cette distance |
| Nouveauté | rien dans les dépôts publics consultés ni sur HCPortal ; 6 recherches web sans édition ni déchiffrement |

## 4. Lecture de L2 (segmentation du vérificateur ; en gras = passages chiffrés ; [ ] = non compris)

> Demnach Wir in **wie[149]legung** der **herrausgekommenen d[100]ni[128]en Manifest** und zwar der eine in **enthaltenen ersten articuls** nimmt…lich
> **[181]li[131]e [129]wedische Waffen** in **unser [193]thumb Brehmen** vorkommen, und derselbe endlich **occupiret**, einer gründlichen information benöthigt …
> bey **[h]nser [181]**lichen **Cantzlei** … unterrichtet und dass **geh[q]rige documenta** …

= *Widerlegung des herausgekommenen dänischen Manifests … im ersten Artikel … Königliche Schwedische Waffen in unser Herzogthumb Bremen … occupiret … bey unser
Königlichen Cantzley … gehörige documenta.*

Signe à signe : [dechiffrement.txt](dechiffrement.txt) ; transcription : [chiffre.txt](chiffre.txt).

## 5. Réserves

1. **Taux par mot < 80 %** : les codes du répertoire au-delà de 99 (149, 181 ×2, 193, 128, 129, 131) ne sont pas établis dans la clé figée (181 = König et 193 = Herzog
   sont très probables par le sens, mais comptés non compris).
2. Deux valeurs de la clé figée sont contredites par le sens dans L2 : **27 = h** (« hnser » pour *unser*) et **64 = q** (« gehqrige » pour *gehörige*) ; ces deux
   chiffres portent un tréma dans le manuscrit. **100 = ch** est une hypothèse (le sens demande *ä*).
3. Le texte en clair de L2 n'est pas connu (le principal est probablement à Stockholm, Riksarkivet) ; une édition suédoise ou brandebourgeoise n'a pas été trouvée
   mais ne peut être exclue.
4. L1 et L3 ont servi à l'entraînement : elles ne sont pas comptées (L3 est d'ailleurs connue par son original en clair).
5. La reproduction du solveur repose sur les transcriptions de L1 et L3 faites par l'équipe (non refaites à l'aveugle).

## 6. Sources

- Niedersächsisches Landesarchiv, Abt. Stade, Rep. 5a Nr. 636 (anc. Rep. 5a Fach 71 Nr. 5) : « zur dänischen Invasion und Blockade von Bremervörde (mit Chiffre) ».
- Arcinsys Niedersachsen : https://www.arcinsys.niedersachsen.de/arcinsys/detailAction?detailid=v7195857
