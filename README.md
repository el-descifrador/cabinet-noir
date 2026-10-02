# Cabinet Noir

[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.23039566.svg)](https://doi.org/10.5281/zenodo.23039566)

**Lettres chiffrées historiques : lectures vérifiées (XVIᵉ-XIXᵉ siècle)** · *Historical cipher letters: verified readings (16th-19th century)*

> **FR.** Ce dépôt réunit 102 lectures de lettres chiffrées conservées dans des archives européennes (BnF, AHNOB/PARES, Hessisches Staatsarchiv Marburg, Niedersächsisches Landesarchiv Stade, Landesarchiv NRW, Sächsisches Hauptstaatsarchiv Dresden, Herzog August Bibliothek Wolfenbüttel, Rigsarkivet Copenhague) :
> **99 lectures confirmées** par un vérificateur indépendant (presque toutes **« avec réserves »**) **+ 3 lectures partielles** (résultats n°10, 16, 22), qui restent **sous le seuil de 80 %**
> selon au moins une mesure et ne sont pas comptées comme confirmées (voir § 3). Pour chaque lettre : transcription du chiffré, clé utilisée
> (nos clés ; pour une clé publiée par un tiers, seulement la référence et nos compléments), lecture, taux mesurés par le vérificateur, réserves, sources (liens, aucune image).
> Le travail a été fait par une équipe d'agents d'IA (Claude, Anthropic) coordonnée par un humain ; les lectures sont des **propositions argumentées**, pas des éditions critiques.
>
> **EN.** This repository gathers 102 readings of cipher letters kept in European archives (BnF, AHNOB/PARES, Hessisches Staatsarchiv Marburg, Niedersächsisches Landesarchiv Stade, Landesarchiv NRW, Sächsisches Hauptstaatsarchiv Dresden, Herzog August Bibliothek Wolfenbüttel, Rigsarkivet Copenhague):
> **99 confirmed readings** by an independent verifier (most of them **"with reservations"**) **+ 3 partial readings** (results nos. 10, 16, 22) that fall **below the 80 % threshold**
> under at least one measure and are not counted as confirmed (see § 3). For each letter: ciphertext transcription, key used (our own keys;
> for keys published by third parties, only the reference and our additions/corrections), reading, verifier's scores, reservations, sources (links only, no images).
> The work was done by a team of AI agents (Claude, Anthropic) coordinated by a human; readings are **argued proposals**, not critical editions.
> Documentation is in French; the table below is self-explanatory (result no., shelfmark, date, key origin, verified rates per cipher group / per word).
> Our results are cited as « résultat n°NN » (result no. NN), to avoid any confusion with the item numbers of the manuscripts (e.g. BnF « Espagnol 132 n°88 »).

**Statut / status : version 1.2.1 (02/10/2026 ; voir le « Journal des versions » en fin de fichier). Auteur : Descifrado. Dépôt : https://github.com/el-descifrador/cabinet-noir.**

---

## 1. Ce qu'il faut savoir avant de lire (avertissements)

1. **« Non trouvé » ≠ « inédit ».** La colonne « nouveauté » dit seulement ce que nous avons cherché sans le trouver (éditions imprimées accessibles, catalogues,
   dépôts publics de concurrents). Un déchiffrement d'époque, une minute en clair ou une édition peuvent exister ailleurs (archives non numérisées, AGS, AAE, Modène…).
2. **Presque toutes les lectures sont « avec réserves ».** Codes de noms non résolus, taux par mot < 80 %, marges minces, passages opaques : chaque dossier les détaille.
   Les taux sont ceux du **vérificateur** (sa transcription, son script), selon une **mesure sévère** : tout signe à deux valeurs, toute hypothèse, tout code à un seul contexte,
   tout groupe caché dans la reliure compte comme **non compris**.
3. **Deux sortes de résultats**, à ne pas confondre :
   - **clé cassée / reconstruite / retrouvée par nous** (vraies percées : Malsburg 1637, Charles X Gustave 1657, Santa Cruz 1631-1635, Ridolfi 1646, Grana 1650, Fogliani 1568, Ventadour 1595, Brèves 1610 ; clés d'époque **retrouvées par nous dans un autre volume ou un autre fonds** : Santa Cruz 1635 (« Cifra general del año 1635 », AHNOB OSUNA, qui confirme notre reconstruction antérieure) et Loss → Debrose 1742-1746 (clé « Debrais », Dresde) ; chiffres **triviaux** (substitutions réciproques, sans mérite cryptanalytique) : Vind 1647 (cassé à l'aveugle) et Ritthaler 1681 (clé tirée d'une paire glosée) ; à un moindre degré, la clé d'époque n°71 de Nevers, identifiée par nous comme celle de Montholon (résultat n°11) : clé retrouvée, pas cassée, dont l'alphabet était déjà reconstitué par Tomokiyo ; l'apport est l'identification et la table des noms) ;
   - **première lecture avec une clé publiée ou d'époque** (Tomokiyo, Devos 1950, table du Grand Chiffre, clé notée par le déchiffreur d'époque, clé d'époque de Landsberg 1677 retrouvée dans le même volume…) : le mérite de la clé revient à son auteur.
4. **Malsburg 1637 et Hesse 1824** ont été lus **indépendamment et en parallèle** d'un autre projet public, qui les a **publiés le premier** (dbourdeau/cyphersolver, 29/09/2026).
   Nous ne revendiquons **aucune priorité** : nos lectures valent confirmation indépendante (pour Malsburg, les deux clés cassées à l'aveugle concordent sur 81 des 88 valeurs communes).
   **Validations d'époque trouvées après coup (01/10/2026).** Pour Malsburg, le dossier complet (Arcinsys Hessen) contient les **mises en clair d'époque** de f.18 et de f.28-29
   (résultats n°55 et n°65) : elles confirment la clé cassée à l'aveugle (f.18 : 92,8 % des mots épelés et 97,6 % des lettres), mais le contenu de ces deux lettres **n'est pas inédit**
   (étiquette : « clé cassée à l'aveugle, validée a posteriori par la mise en clair d'époque du même dossier »). Pour Hesse 1824 (résultat n°51), le **tableau de Vigenère d'époque**
   conservé dans le même dossier (fol. 237) confirme le système reconstruit. Les taux officiels ne changent pas.
5. Les lectures n'ont pas été relues par un paléographe ou un historien spécialiste. Les identifications de personnes et de lieux marquées HYP sont des hypothèses.
6. **Aucune image** n'est reproduite ici : suivre les liens vers Gallica, PARES, HCPortal, Arcinsys, le Landesarchiv NRW, les Archives de Saxe (archiv.sachsen.de), la bibliothèque numérique de la HAB ou Arkivalieronline (Rigsarkivet). Les transcriptions sont les nôtres, faites sur ces images.

## 2. Méthode (résumé ; détail dans [METHODE.md](METHODE.md))

- **Équipe** : des agents d'IA « casseurs » (transcription, recherche de clé, lecture), puis, pour chaque lettre, un **agent vérificateur frais** qui refait
  la transcription d'une partie ou de la totalité du chiffré **à l'aveugle**, reproduit la méthode (solveur relancé, clé recontrôlée sur les paires d'époque) et mesure lui-même les taux.
- **Taux sévère par groupe et par mot**, scriptés par le vérificateur sur une **copie figée** de la clé. Critère d'acceptation : ≥ 80 % des groupes chiffrés compris ;
  le taux par mot est toujours donné à côté, et une **réserve** est posée s'il est < 80 %. Pour les chiffres qui gardent les mots (Ritthaler 1681, Vind 1647) et pour la correspondance
  Loss → Debrose (nomenclateur dont beaucoup de mots sont épelés lettre à lettre), l'unité de mesure est le **mot** : critère ≥ 80 % des mots chiffrés compris (Loss : et au moins 20 mots chiffrés ;
  mots épelés ≥ 80 % aussi, règle valable pour tout chiffre où des codes isolés pourraient gonfler le taux).
- **Tests de généralisation figés** : pour les clés cassées ou reconstruites par nous, la clé est **figée (empreinte + horodatage) avant l'ouverture** des images de la lettre testée ;
  la lettre ne doit avoir fourni aucune valeur à la clé. Pour les cassages à l'aveugle : estimation de la distance d'unicité, reproduction du solveur avec d'autres graines, test contre des clés nulles.
- **Lettres entières** seulement : début et fin (date, signature, contreseing) vus sur l'image.

## 3. Tableau des résultats

**Numérotation** : nos résultats sont désignés « **résultat n°NN** » (colonne « Résultat n° ») ; les numéros de pièces des manuscrits gardent leur forme d'origine
(par exemple BnF « Espagnol 132 n°88 », « fr 4715 n°48 » : ce sont des cotes, pas nos résultats).
Légende « clé » : **C** = cassée à l'aveugle par nous ; **R** = reconstruite par nous depuis des paires chiffré/déchiffré d'époque ; **E** = clé d'époque retrouvée par nous (dans le même volume ou ailleurs) ;
**P** = clé publiée par un tiers (première lecture de la lettre avec cette clé) ; **D** = clé d'époque donnée par une note du déchiffreur.
« Nouveauté » (selon le **clair**) : **A** = aucun clair connu trouvé ; **B** = clair partiel connu (citation, résumé, fragment) ; **C** = texte déjà connu/imprimé
(notre apport = lecture de l'exemplaire chiffré). « prov. » = provisoire. Taux = vérificateur, mesure sévère ; « — » = non mesuré à l'époque de la vérification, ou sans objet (chiffres qui gardent les mots : mesure par mot seulement).
Pour Loss → Debrose, la colonne donne groupe / mot (et mots épelés) ; le critère porte sur le mot.

> **Résultats sous le seuil de 80 % : à lire comme des lectures partielles, pas comme des confirmations pleines.** Le critère d'acceptation est ≥ 80 % des groupes
> chiffrés compris, selon la mesure du vérificateur. Les trois lignes suivantes ne l'atteignent pas, ou ne l'atteignent pas selon la mesure la plus prudente. Leur vérificateur a conclu
> « confirmé avec réserves », mais elles **ne sont pas présentées ici comme pleinement confirmées** (colonne « Seuil 80 % ») :
> - **résultat n°10** (Montholon → Nevers, BnF fr 4715 n°48 f.71) : **≈ 75 %** compris ;
> - **résultat n°22** (Croissy → Mazarin, BnF Baluze 178 f.73-74) : 85,7 % en mesure stricte, mais **79,8 %** (≈ 80,3 % après contrôle) en « aveugle révisé », la seule mesure proche de la règle sévère
>   (≈ 8 % des jetons sont des signes à deux valeurs tranchés au sens) ;
> - **résultat n°16** (Philippe II → Vargas Mexía, BnF Espagnol 132 f.17-25) : 83,5 % (81,6 % au dénominateur prudent), mais **79,9 %** dans la variante stricte du vérificateur
>   (mesure en équivalents-lignes, ± 3 points ; « seuil atteint, de peu »).
>
> **Bornes extrêmes sous 80 %, non retenues par leur vérificateur** (à connaître) : résultat n°27 (63,5 % si l'on compte non compris les 29 % de la lettre qu'aucun vérificateur n'a relus) ;
> résultat n°40 (79,8 % en mode ultra-sévère en comptant le passage biffé par la chancellerie) ; résultat n°11 (79,3 % si le passage R2 est refusé, 79,96 % en cumulant toutes les variantes défavorables ; ancienne lecture partielle, reclassée confirmée avec réserves le 29/09 avec la clé d'époque Nevers n°71) ; résultat n°7 (plancher théorique ≈ 80 % dans le pire cas combiné).
>
> Depuis la version 1.2.0 : résultats n°80 et n°81 (empilement maximal des doutes 78,9 % et 77,6 % au mot) ; **résultat n°82** (variante stricte **78,4 %** au mot) ;
> **résultat n°83** (variante stricte **75,0 %** au mot, 28 mots : « fortes réserves ») ; résultat n°86 (empilement maximal 78,1 % au mot) ;
> **résultat n°89** (graphie stricte **79,2 %**, borne basse 72,0 % au mot).
> Loss → Debrose (critère par mot) : **résultat n°102 à 80,0 % pile au mot (marge nulle)** ; variantes plus sévères sous 80 % : résultat n°85 (mots épelés, variante stricte 79,2 %),
> résultat n°88 (empilement maximal 73,9 % au mot) ; par groupe seulement (indicatif, le critère Loss porte sur le mot) : résultats n°87 (groupe strict 71,0 %), n°90 (79,4 %),
> n°91 (empilements 60-73 %), n°94 (72-74 % sous tous les doutes), n°95 (77,1 %), n°98 (75,9 % en variante sur-sévère).
>
> En outre, **18 lignes** atteignent le seuil par groupe mais **pas par mot** (taux par mot < 80 %, en gras : résultats n°11, 48, 49, 51, 52, 53, 54, 56, 58, 60, 63, 65, 70, 71, 74, 76, 77, 78) : réserve explicite, lecture à prendre avec prudence.

| Résultat n° | Document | Cote | Date | Clé | Taux groupe / mot | Seuil 80 % | Réserves principales | Nouv. | Dossier |
|---|---|---|---|---|---|---|---|---|---|
| 1 | Roi Joseph → Napoléon (planche dite « Berthier ») | chiffré : J. Vilcoq, *Revue historique de l'Armée*, 1969, n° 4, planche p. 24 ; déchiffrement d'époque : TNA WO 37/2/21 | 22/12/1812 | P (Grand Chiffre) | lettre entière lue | atteint | déjà déchiffrée par Scovell (TNA WO 37/2/21) | C | [joseph-napoleon-1812](joseph-napoleon-1812/) |
| 2 | Fogliani → Renée de France | BnF fr 3234 p. 61 f.103 | 20/10/1568 | C (substitution simple) | lettre entière ; solveur reproduit à l'aveugle | atteint | code « IR » non prouvé | A prov. | [fogliani-1568](fogliani-1568/) |
| 3 | Marie de Médicis → Brèves (2 passages) | BnF fr 3789 f.19 (et f.17) | 10/11 (et 15/09) 1610 | E (clé retrouvée dans fr 3462) | 38/38 et 59/59 signes | atteint | 2 valeurs de contexte ; faute du chiffreur | A prov. | [breves-1610](breves-1610/) |
| 4 | Montholon → Nevers (2 billets) | BnF fr 3414 p. 78 (f.126-127) | 15 et 18/11/1589 | P (Tomokiyo) | ≈85 % du chiffré (95,5 % des groupes par la clé publiée) / — | atteint | clair partiellement non transcrit ; ~25 non résolu | A prov. | [montholon-1589](montholon-1589/) |
| 5 | Montholon → Nevers | BnF fr 4715 n°58 f.81 (l.18-40) | 8/11/1589 | P (Tomokiyo) | l.18-28 ≈85-90 % ; l.29-40 ≈90-95 % (aveugle ≈95 %) / — | atteint | ~25, ~50, ~85 non identifiés | A prov. | [montholon-1589](montholon-1589/) |
| 6 | Philippe II → Vargas Mexía | BnF Esp. 132 f.11-12v | 24/01/1578 | P (Tomokiyo, Cipher 2) | 95,4 % (pess. 90,4 %) / — | atteint | clé cassée par Tomokiyo sur cette lettre ; partie en clair éditée (Gachard 1875) | B | [es132-vargas-mexia](es132-vargas-mexia/) |
| 7 | A. Pérez → Vargas Mexía | BnF Esp. 132 f.198-199r | 15/04/1579 | P (Devos/Tomokiyo, Cipher 4) | 85,5-89,6 % (pess. 84,6 %) / — | atteint | perte en reliure ; plancher ≈ 80 % (pire cas combiné) | B faible | [es132-vargas-mexia](es132-vargas-mexia/) |
| 8 | Ventadour → connétable de Montmorency | BnF fr 3575 f.56 | fin 1595 | C (par la structure) | ≈96 % / — | atteint | Mondon non identifié | A prov. | [ventadour-1595](ventadour-1595/) |
| 9 | Montholon → Nevers | BnF fr 4715 n°37 f.60 | 12/12/1589 | P (Tomokiyo) | ≈86 % / — | atteint | 4 codes HYP | A prov. | [montholon-1589](montholon-1589/) |
| 10 | Montholon → Nevers | BnF fr 4715 n°48 f.71 | fin 1589 | P (Tomokiyo) | **≈75 %** compris / — | **sous le seuil de 80 % — lecture partielle** | **< 80 % compris** ; zone Q restructurée | A prov. | [montholon-1589](montholon-1589/) |
| 11 | Montholon → Nevers | BnF fr 4715 n°35 f.58 | 26/11/1589 | E (clé d'époque Nevers n°71, BnF fr 3995 f.133r, identifiée par nous comme celle de Montholon ; paire d'époque fr 4712 f.7r) | 82,2 % / **76,4 %** (lettre entière, 900 groupes) | atteint au groupe ; **mot < 80 %** (réserve) ; **marge 2,2 pts sur R2** | R2 (26 groupes) tranchée au sens : refusée 79,3 % ; sévère 77,2 % ; pire cumul 79,96 % ; ~35 = Mayenne à un seul contexte | A prov. | [montholon-1589](montholon-1589/) |
| 12 | Montholon → Nevers | BnF fr 4715 n°47 f.70 | fin 1589-déb. 1590 | P (Tomokiyo) | ≈88 % (parties non glosées) / — | atteint | | A prov. | [montholon-1589](montholon-1589/) |
| 13 | Montholon → Nevers | BnF fr 4715 n°27 f.50 | 30/10/1589 | P (Tomokiyo) | 91,0 % phrase ; 88,2 % strict / — | atteint | L13-L14 non comprises ; ''84, ~8 HYP | A prov. | [montholon-1589](montholon-1589/) |
| 14 | Philippe II → Vargas Mexía | BnF Esp. 132 n°15 f.32 | 17/03/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 92,6 % / — | atteint | sans duplicata ; xal non compris ; recalcul avec la nomenclature Alcocer (non vérifié) 93,8 % | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 15 | Philippe II → Vargas Mexía | BnF Esp. 132 f.34 | 16/03/1578 | P (Tomokiyo, Cipher 2) | ≈93-95 % / — | atteint | codes ouverts | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 16 | Philippe II → Vargas Mexía | BnF Esp. 132 f.17-25 | 08/03/1578 | P (Tomokiyo, Cipher 2) | 83,5 % (P = 0,25 ; 81,6 % dénominateur prudent) ; variante stricte **79,9 %** / — | atteint de peu ; **variante stricte 79,9 %** (marge nulle) | mesure en équivalents-lignes (± 3 pts) ; 2 passages imprimés (Mignet 1846) | B | [es132-vargas-mexia](es132-vargas-mexia/) |
| 17 | Philippe II → Vargas Mexía | BnF Esp. 132 f.123 | 20/10/1578 | P (Devos/Tomokiyo, Cipher 4) | 97,2 % / — | atteint | 4 codes HYP | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 18 | Philippe II → Vargas Mexía | BnF Esp. 132 f.245 | 29/11/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 90,0 % (strict, reproduit ; échantillon aveugle 91,3 %) / — | atteint | | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 19 | Philippe II → Vargas Mexía | BnF Esp. 132 f.154-155 | 04/12/1578 | P (Devos/Tomokiyo, Cipher 4) | 87,6 % / — | atteint | | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 20 | Philippe II → Vargas Mexía | BnF Esp. 132 f.142 | 12/11/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 96,0 % / — | atteint | 4 codes, personnages non identifiés | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 21 | Philippe II → Vargas Mexía | BnF Esp. 132 f.138 | 12/11/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 94,7 % / — | atteint | codes 118 et « bam » non résolus ; « Ruan » HYP | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 22 | Colbert de Croissy → Mazarin | BnF Baluze 178 f.73-74 | 09/05/1660 | P (Tomokiyo) | 85,7 % strict ; aveugle révisé **79,8 %** (≈ 80,3 %) / — | **sous le seuil de 80 % selon la mesure la plus prudente (79,8 %) — lecture partielle, marge nulle** | ≈ 8 % de jetons choisis au sens (signes à deux valeurs) ; copie | A prov. | [croissy-mazarin-1660](croissy-mazarin-1660/) |
| 23 | Philippe II → Vargas Mexía | BnF Esp. 132 f.222 | 13/09/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 93,0 % / — | atteint | | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 24 | Philippe II → Vargas Mexía | BnF Esp. 132 f.165 (+ f.167) | 10/01/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 96,3 % / — | atteint | fragment lu par Tomokiyo | B faible | [es132-vargas-mexia](es132-vargas-mexia/) |
| 25 | Philippe II → Vargas Mexía | BnF Esp. 132 f.81-82 | 18/08/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 91,0 % / — | atteint | Tomokiyo a publié le déchiffrement interlinéaire des ≈ 4 premières lignes | B | [es132-vargas-mexia](es132-vargas-mexia/) |
| 26 | Philippe II → Vargas Mexía | BnF Esp. 132 f.220-221 | 13/09/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 95,8 % / — | atteint | | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 27 | Philippe II → Vargas Mexía | BnF Esp. 132 f.228-229 | 13/10/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 90,3 % / — | atteint | 29 % des groupes (f.229r) relus par aucun vérificateur (borne basse 63,5 %) | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 28 | Philippe II → Vargas Mexía | BnF Esp. 132 f.113 | 13/10/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 92,8 % / — | atteint | | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 29 | Philippe II → Vargas Mexía | BnF Esp. 132 f.73-74 | 31/07/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 92,0 % / — | atteint | code {107} non prouvé | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 30 | Philippe II → Vargas Mexía | BnF Esp. 132 n°88 f.195 | 18/03/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 92,8 % / — | atteint | lettre courte | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 31 | Philippe II → Vargas Mexía | BnF Esp. 132 n°74 f.161 | 12/12/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 92,4 % (sévère ; casseur 94,8 % reproduit) / — | atteint | sans duplicata ; L11 non comprise | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 32 | A. Pérez → Vargas Mexía | BnF Esp. 132 n°48 f.105 | 13/10/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 94,3 % (sévère 92,6 %) / — | atteint | | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 33 | Philippe II → Vargas Mexía | BnF Esp. 132 n°117 f.255 | 28/03/1580 | P (Alcocer 1921 / Devos 1950, Cp.30) | 89,6 % / — | atteint | minute en clair imprimée (Teulet) | **C** | [es132-vargas-mexia](es132-vargas-mexia/) |
| 34 | Philippe II → Vargas Mexía | BnF Esp. 132 n°27 f.58 | 07/06/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 92,2 % (sévère ; casseur 93,0 % reproduit) / — | atteint | 14+ écrit pour 144+ (non compris) | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 35 | Philippe II → Vargas Mexía | BnF Esp. 132 n°97 f.215 | 13/07/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 91,8 % / — | atteint | lettre courte ; « Portugal » HYP | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 36 | Philippe II → Vargas Mexía | BnF Esp. 132 n°62 f.134 | 02/11/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 84,4 % / — | atteint | sans duplicata ; 9 lignes non relues à l'aveugle (≈ 83 % estimé) ; recalcul Alcocer (non vérifié) 88,1 % | B (§ 1 : CSP II n°536) | [es132-vargas-mexia](es132-vargas-mexia/) |
| 37 | Duc de Feria → Idiáquez | BnF fr 3641 n°58 f.124-125 | 07/04/1593 | P (Tomokiyo) validée par clé d'époque | ≈88,7 % (84-92 %) / — | atteint | « Infanta [Reyna] » : code à 1 contexte | A | [feria-1593-1594](feria-1593-1594/) |
| 38 | Duc de Feria → Cristóbal de Mora | BnF Esp. 336 n°90 f.179 | 04/01/1594 | P (Tomokiyo) + clé d'époque | 82,8 % / — | atteint, **marge faible** (76,8 % sous une extension non retenue) | **marge faible** | B faible | [feria-1593-1594](feria-1593-1594/) |
| 39 | Philippe II → Vargas Mexía | BnF Esp. 132 n°33 f.71 | 19/07/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 89,4 % / — | atteint | codes HYP | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 40 | Philippe II → Vargas Mexía | BnF Esp. 132 n°22 f.44 | 29/04/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 87,2 % / — | atteint ; biffure comptée 82,0 % ; borne extrême 79,8 % | ≈ 28 % (L10-L24) non relu à l'aveugle ; sans duplicata | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 41 | Philippe II → Vargas Mexía | BnF Esp. 132 n°23 f.46 | 29/04/1578 | P (Alcocer 1921 / Devos 1950, Cp.30) | 90,1 % / — | atteint | | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 42 | Philippe II → Vargas Mexía | BnF Esp. 132 n°90 f.200 | 21/04/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 90,1 % / — | atteint | « Portugal » HYP | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 43 | Alexandre Farnèse → Vargas Mexía | BnF Esp. 132 n°106 f.233 | 01/11/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 87,9 % / — | atteint | 10 l. non relues à l'aveugle ; sans duplicata | non établie (A fragile : archives Farnèse non vues) | [es132-vargas-mexia](es132-vargas-mexia/) |
| 44 | Philippe II → Vargas Mexía | BnF Esp. 132 n°95 f.211 | 03/07/1579 | P (Alcocer 1921 / Devos 1950, Cp.30) | 85,4 % (borne basse 82,7 %) / — | atteint | sans duplicata ; {ta} = Duque | A | [es132-vargas-mexia](es132-vargas-mexia/) |
| 45 | Baugy → Mangot | BnF Clairambault 369 f.2-3 | 01/10/1616 | P (Tomokiyo), prouvée sur gloses d'époque | 87,1 % / — | atteint | reliure (pire cas 83,2 %) | faible | [baugy-1616](baugy-1616/) |
| 46 | Baugy → Mangot | BnF Clairambault 369 f.59-60 | 08/10/1616 | P (Tomokiyo), prouvée sur gloses d'époque | 88,6 % / — | atteint | 13 codes hors clé | faible | [baugy-1616](baugy-1616/) |
| 47 | Commandeur de Nuchèze → « grand maistre » | BnF Mél. Colbert 109 f.556-557 | 1662 | P (Tomokiyo) | 98,9 % (symboles) / 91,0 % | atteint | | faible | [nuchese-1662](nuchese-1662/) |
| 48 | La Haye-Vantelet → Colbert | BnF Mél. Colbert 138 f.437-439 | 11/06/1666 | P (Tomokiyo) | 89,3 % / **75,9 %** | atteint au groupe ; **mot < 80 %** (réserve) | réserve au mot | B faible | [delahaye-constantinople-1666](delahaye-constantinople-1666/) |
| 49 | La Haye-Vantelet → Colbert | BnF Mél. Colbert 138 f.441-442 | 27/05/1666 | P (Tomokiyo) | 85,4 % / **67,9 %** | atteint au groupe ; **mot < 80 %** (réserve) | réserve forte au mot | B faible | [delahaye-constantinople-1666](delahaye-constantinople-1666/) |
| 50 | Nuchèze, « Scituation de l'isle d'Alboran » | BnF Mél. Colbert 108 f.222-223 | 1662 | P (Tomokiyo) | 98,3 % / 92,5 % | atteint | 31 = z HYP | B fragile | [nuchese-1662](nuchese-1662/) |
| 51 | « Snell an St.. » (Demagogenverfolgung) | HStAM 9 a Nr. 259 f.249 | 20/02/1824 | D (clé du déchiffreur d'époque ; système confirmé par le tableau d'époque fol. 237) | 92,4 % (lettres) / **68,8 %** | atteint au groupe ; **mot < 80 %** (réserve) | fautes de copie ; **lu en parallèle, publié d'abord par un tiers** | publié d'abord par un tiers | [hesse-1824](hesse-1824/) |
| 52 | Bonzi, évêque de Béziers → Colbert | BnF Mél. Colbert 155 f.132-133 | 13/08/1670 | P (Tomokiyo) | 91,7 % / **75,8 %** | atteint au groupe ; **mot < 80 %** (réserve) | codes à accent non compris | B | [beziers-1670](beziers-1670/) |
| 53 | Malsburg → Hesse-Cassel | HStAM 4 h Nr. 1411 f.3 | 15/01/1637 | **C** | 86,8 % / **72,2 %** | atteint au groupe ; **mot < 80 %** (réserve) | lettre ayant servi au cassage ; codes non résolus ; **publié d'abord par un tiers** | publié d'abord par un tiers | [malsburg-1637](malsburg-1637/) |
| 54 | Philippe IV → marqués de Santa Cruz | AHNOB Santa Cruz C.51 D.74 | 16/07/1632 | **R** | 84,6 % / **71,7 %** | atteint au groupe ; **mot < 80 %** (réserve) | codes non prouvés | B | [santacruz-1631-1635](santacruz-1631-1635/) |
| 55 | Malsburg → Hesse-Cassel | HStAM 4 h Nr. 1411 f.18 | 14/24.02.1637 | **C** (test de généralisation ; validée a posteriori par la mise en clair d'époque du même dossier) | 93,6 % / 82,6 % | atteint | codes non résolus | C (mise en clair d'époque dans le dossier) ; publié d'abord par un tiers | [malsburg-1637](malsburg-1637/) |
| 56 | Philippe IV → fray Diego de Quiroga | AHNOB Santa Cruz C.51 D.75 | 07/1632 | **R** | 84,2 % / **62,4 %** | atteint au groupe ; **mot < 80 %** (réserve) | réserve forte au mot | non établie | [santacruz-1631-1635](santacruz-1631-1635/) |
| 57 | Malsburg → Hesse-Cassel | HStAM 4 h Nr. 1411 f.25 | 23.02/05.03.1637 | **C** (généralisation) | 94,1 % / 83,5 % | atteint ; mot 83,5 % (pessimiste 77,7 %) | pess. 77,7 % au mot | publié d'abord par un tiers | [malsburg-1637](malsburg-1637/) |
| 58 | Philippe IV → marqués de Santa Cruz | AHNOB Santa Cruz C.51 D.80 | 30/09/1632 | **R** (généralisation) | 81,2 % / **68,7 %** | atteint, **marge mince** ; **mot < 80 %** (réserve) | **marge mince** | A prov. | [santacruz-1631-1635](santacruz-1631-1635/) |
| 59 | Croissy → J.-B. Colbert | BnF Baluze 178 f.130-131 | 10/01/1661 | P (Tomokiyo) | 95,5 % / 91,2 % | atteint | erreur probable de la clé publiée (57) | B | [croissy-rome-1661](croissy-rome-1661/) |
| 60 | Malsburg → Hesse-Cassel | HStAM 4 h Nr. 1411 f.14 | 16/26.01.1637 | **C** (généralisation) | 87,0 % / **70,1 %** | atteint au groupe ; **mot < 80 %** (réserve) | 16 groupes cachés au bord | publié d'abord par un tiers | [malsburg-1637](malsburg-1637/) |
| 61 | Croissy → Mazarin (duplicata) | BnF Baluze 178 f.162-165 | 31/01/1661 | P (Tomokiyo) | 88,4 % / 84,8 % | atteint | | B | [croissy-rome-1661](croissy-rome-1661/) |
| 62 | Philippe IV → marqués de Santa Cruz | AHNOB Santa Cruz C.51 D.6 | 29/06/1631 | **R** | 90,3 % / 80,8 % (3ᵉ examen) | atteint | réserve levée, marge d'un mot | A prov. | [santacruz-1631-1635](santacruz-1631-1635/) |
| 63 | Philippe IV → Infante Isabel (copie chiffrée) | AHNOB Santa Cruz C.51 D.60 | 04/06/1632 | **R** (généralisation) | 85,1 % / **67,6 %** | atteint au groupe ; **mot < 80 %** (réserve) | réserve au mot | C (résumé imprimé) | [santacruz-1631-1635](santacruz-1631-1635/) |
| 64 | Croissy → Mazarin (duplicata) | BnF Baluze 178 f.138-139 | 17/01/1661 | P (Tomokiyo) + compléments | 86,5 % / 89,7 % | atteint | | B | [croissy-rome-1661](croissy-rome-1661/) |
| 65 | Malsburg → Hesse-Cassel | HStAM 4 h Nr. 1411 f.28-29 | 28.03 (v. st.) 1637 | **C** (généralisation ; validée a posteriori par la mise en clair d'époque du même dossier) | 88,4 % / **76,1 %** | atteint au groupe ; **mot < 80 %** (réserve) | codes non résolus | C (mise en clair d'époque dans le dossier) ; publié d'abord par un tiers | [malsburg-1637](malsburg-1637/) |
| 66 | Croissy → J.-B. Colbert | BnF Baluze 178 f.135-137 | 17/01/1661 | P (Tomokiyo) + compléments | 86,7 % / 85,4 % | atteint | | B | [croissy-rome-1661](croissy-rome-1661/) |
| 67 | Malsburg → Hesse-Cassel | HStAM 4 h Nr. 1411 f.23-24 | 07/02/1637 | **C** | 89,2 % / 80,4 % | atteint | lettre ayant servi au cassage | publié d'abord par un tiers | [malsburg-1637](malsburg-1637/) |
| 68 | Croissy → J.-B. Colbert | BnF Baluze 178 f.166-169 | 28/01/1661 | P (Tomokiyo) + compléments | 88,6 % / 86,3 % (addendum vérificateur) | atteint | | A prov. | [croissy-rome-1661](croissy-rome-1661/) |
| 69 | Croissy → Mazarin (duplicata) | BnF Baluze 178 f.195-197 | 14/02/1661 | P (Tomokiyo) + compléments | 94,0 % / 94,1 % | atteint | | A prov. | [croissy-rome-1661](croissy-rome-1661/) |
| 70 | Philippe IV → marqués de Santa Cruz | AHNOB Santa Cruz D.113 | 08/09/1634 | **R** (lecture à l'aveugle) | 85,7 % / **68,1 %** | atteint au groupe ; **mot < 80 %** (réserve) | réserve au mot | A prov. | [santacruz-1631-1635](santacruz-1631-1635/) |
| 71 | Philippe IV → marqués de Santa Cruz | AHNOB Santa Cruz D.99 | 24/07/1634 | **R** (lecture à l'aveugle) | 87,5 % / **76,6 %** | atteint au groupe ; **mot < 80 %** (réserve) | réserve au mot | A prov. | [santacruz-1631-1635](santacruz-1631-1635/) |
| 72 | Croissy → Mazarin | BnF Baluze 178 f.213-217 | 07/02/1661 | P (Tomokiyo) + compléments | 93,9 % / 90,6 % | atteint | | A prov. | [croissy-rome-1661](croissy-rome-1661/) |
| 73 | Croissy → J.-B. Colbert | BnF Baluze 178 f.223-226 | 07/02/1661 | P (Tomokiyo) + compléments | 94,1 % / 93,1 % | atteint | | A prov. | [croissy-rome-1661](croissy-rome-1661/) |
| 74 | Philippe IV → marqués de Santa Cruz | AHNOB Santa Cruz D.145 | 26/05/1635 | **R** (lecture à l'aveugle) | 84,4 % / **69,1 %** | atteint au groupe ; **mot < 80 %** (réserve) | réserve au mot | A prov. | [santacruz-1631-1635](santacruz-1631-1635/) |
| 75 | Ludovico Ridolfi → duc d'Arcos | AHNOB OSUNA C.3456 D.107 | 08/05/1646 | **C** (clé non publiée) | 89,6 % / 89,9 % (pessimiste) ; très pessimiste 84,6 % / 86,3 % | atteint | lettre unique (pas de test de généralisation) ; valeurs rares à 1-2 contextes ; 12 codes non prouvés | A prov. | [ridolfi-1646](ridolfi-1646/) |
| 76 | Marquis de Grana → duc de l'Infantado | AHNOB OSUNA CT.13 D.6 | 09/04/1650 | **R** (clé non publiée ; test de clé à la limite) | 85,8 % / **59,5 %** (p.1, aveugle) ; lettre entière 87,9 % / 68,3 % | atteint au groupe ; **mot < 80 %** (réserve) | test de clé à la limite (81,4 % ; 77,5-79,6 % aveugle) ; pas de 2ᵉ paire ; signe 18 hors clé | A prov. | [grana-1650](grana-1650/) |
| 77 | Charles X Gustave → régence de Brême-Verden | NLA Stade Rep. 5a Nr. 636 fol. 115r | 04/07/1657 | **C** (test fermé ; validée par un original en clair d'époque) | 85,7 % / **31,6 %** (aveugle) | atteint au groupe ; **mot < 80 %** (réserve) | mots du répertoire > 99 non établis ; 27 et 64 contredits par le sens ; clair de L2 inconnu | A prov. | [karlgustav-1657](karlgustav-1657/) |
| 78 | Dietrich von Landsberg → J. H. Schmidtman (Vienne) | LAV NRW W 004 (Msc. VI) Nr. 119, vues 110-113 | 23/02/1677 | E (clé d'époque du même volume, vue 133) | 83,2 % / **62,5 %** (aveugle) ; très strict 78,2 % | atteint au groupe ; **mot < 80 %** (réserve) ; **passage court** (101 jetons) | codes 111 et 112 incertains sur la clé ; lectures disputées (47/97, 15/5) | A prov. | [landsberg-1677](landsberg-1677/) |
| 79 | Dietrich von Landsberg → J. H. Schmidtman (Vienne) | LAV NRW W 004 (Msc. VI) Nr. 119, vues 050-053 | 19/01/1677 | E (clé d'époque du même volume, vue 133) | 85,7 % / 81,2 % (prudent, hors 2 mots glosés d'époque) ; vérificateur 97,1 % / 87,5 % | atteint | **passage court** (70 groupes, 16 mots) ; codes de noms ; « Neubourq » (q pour g) | A prov. | [landsberg-1677](landsberg-1677/) |
| 80 | Michael Ritthaler → duc Rodolphe-Auguste de Brunswick-Wolfenbüttel (brouillon latin) | HAB Wolfenbüttel, Cod. Guelf. 252.2 Extrav., fol. 148r | 01/11/1681 | R (paire glosée du même volume, fol. 163v-164r ; chiffre trivial) | — / 84,9 % (par mot ; stricte 83,6 %) | atteint | chiffre trivial, lecture non aveugle au sens strict ; brouillon ; empilement maximal 78,9 % | A prov. | [ritthaler-1681](ritthaler-1681/) |
| 81 | Michael Ritthaler → duc Rodolphe-Auguste (brouillon latin) | HAB Wolfenbüttel, Cod. Guelf. 252.2 Extrav., fol. 147r-v | ≈ 28/10/1681 | R (même clé ; généralisation) | — / 89,5 % (par mot ; stricte 84,2 %) | atteint | 57 mots ; date en partie déduite ; empilement maximal 77,6 % | A prov. | [ritthaler-1681](ritthaler-1681/) |
| 82 | Holger Vind → Erik Krag (lettre privée en danois) | Rigsarkivet, TKUA Alm. del 3, vol. « Chiffer » (Arkivalieronline epid 19852193), vue 126 d. | 17/03/1647 | **C** (substitution réciproque, chiffre trivial) | — / 84,2 % (par mot) ; stricte **78,4 %** | atteint ; **stricte < 80 %** (réserve) | lapsus du scripteur ; 76 mots ; contamination déclarée du vérificateur (compensée) | A prov. | [vind-1647](vind-1647/) |
| 83 | Michael Ritthaler → duc Rodolphe-Auguste (brouillon latin) | HAB Wolfenbüttel, Cod. Guelf. 252.2 Extrav., fol. 154r-v | 29/12/1681 | R (même clé ; généralisation) | — / 89,3 % (par mot) ; stricte **75,0 %** | atteint ; **fortes réserves** (stricte < 80 %, 28 mots) | très court ; contamination déclarée du vérificateur | A prov. | [ritthaler-1681](ritthaler-1681/) |
| 84 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 34-36 | 11/02/1743 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 91,8 % / 91,6 % (épelés 92,1 %) | atteint | aucune de mesure (toutes les variantes ≥ 80 %) | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 85 | J. A. von Loss → général de Debrose (La Haye), lettre « N°14 » | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/11, vues 37-39 | 03/05/1745 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 90,9 % / 96,0 % (épelés 95,8 %) | atteint ; **variante stricte 79,2 % (épelés)** | variante stricte : épelés 79,2 %, mot 80,0 % pile ; groupe strict 68 % | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 86 | Philippe IV → marqués de Santa Cruz (lettre « [Sin descifrar] ») | AHNOB Santa Cruz C.51 D.215 | 23/12/1635 | E (clé d'époque « Cifra general del año 1635 », AHNOB OSUNA C.3456 D.108, retrouvée par nous ; notre reconstruction antérieure concorde 102/102) | 97,7 % / 94,3 % (épelés 93,4 %) ; empilement maximal des doutes de forme 89,2 % / **78,1 %** | atteint | pas de déchiffrement d'époque ; transcription du vérificateur non aveugle à la clé ; empilement maximal < 80 % au mot ; formes ꝑ/ƺ appuyées sur les paires | A prov. | [santacruz-1635b](santacruz-1635b/) |
| 87 | J. A. von Loss → général de Debrose (La Haye), lettre « N°30 » | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/11, vues 209-211 | 26/07/1746 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 93,1 % / 97,6 % (épelés 97,4 %) | atteint ; **groupe strict 71,0 %** | groupe strict 71,0 % ; convention ä = ai ; « Pompadour » non compris (jeton 82/80) | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 88 | J. A. von Loss → général de Debrose (La Haye), lettre « N°7 » | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/11, vues 144-146 | 31/01/1746 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 98,8 % / 95,7 % (épelés 95,5 %) | atteint ; **passage court** (23 mots) | **passage court** (23 mots) ; empilement maximal < 80 % | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 89 | Philippe IV → marqués de Santa Cruz (lettre « [Sin descifrar] », p.24 glosée en partie à l'époque) | AHNOB Santa Cruz C.51 D.164 | 14/08/1635 | E (même clé d'époque OSUNA C.3456 D.108) | 88,4 % / 82,1 % (sévère ; officielle 88,7 / 83,4) ; strict-graphie **79,2 %** mot ; borne basse **72,0 %** mot | atteint, **marge mince** (strict-graphie et borne basse < 80 % au mot) | déchiffrement d'époque partiel (≈ 19 mots, p.24) ; lecture de référence moderne ; même main C que D.215, sans test séparé | A prov. | [santacruz-1635b](santacruz-1635b/) |
| 90 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 41-42 | 08/03/1743 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 95,7 % / 95,7 % (épelés 97,7 %) | atteint ; empilement maximal 79,4 % (groupe) | passage court ; vérificateur exposé au clair de l'équipe (déclaré) ; empilement maximal 79,4 % par groupe | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 91 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 206-208 | 07/12/1744 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 95,1 % / 97,0 % (épelés 96,9 %) | atteint ; empilements maximaux 60-73 % | empilements maximaux 60-73 % (toutes alternatives, même improbables) | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 92 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 20-22 | 22/06/1742 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 94,4 % / 93,4 % (épelés 97,2 %) | atteint | aucune de mesure ; plus ancien usage lu de la clé | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 93 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 43-45 | 25/03/1743 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 94,8 % / 95,2 % (épelés 96,3 %) | atteint | code 24 « av » (2 mots non compris) ; thème vu avant gel (déclaré) | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 94 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 80-82 | 14/10/1743 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 88,9 % / 92,8 % (épelés 94,9 %) | atteint ; tous les doutes : groupe 72-74 % | groupe 72,8-74,2 % sous tous les doutes d'un seul lecteur | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 95 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 93-95 | 07/02/1744 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 86,5 % / 92,7 % (épelés 92,5 %) | atteint ; **groupe fragile** (77,1 % sous tous les doutes réels) | **groupe fragile** (77,1 % sous tous les doutes réels) ; 3 mots sur jetons illisibles | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 96 | J. A. von Loss → général de Debrose (La Haye) (lettre et P.S.) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 16-18 | 03/08/1742 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 93,5 % / 93,5 % (épelés 93,5 %) | atteint | aucune de mesure ; P.S. au verso (rattachement prouvé) | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 97 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 110-113 | 27/03/1744 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 93,0 % / 91,9 % (épelés 94,4 %) | atteint | aucune de mesure ; passage court-moyen (37 mots) | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 98 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 68-70 | 16/08/1743 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 81,0 % / 87,1 % (épelés 87,1 %) | atteint, **marge mince** (groupe 81,0 % ; 80,2 % sous tous les doutes) | **marge mince par groupe** (81,0 % ; 80,2 % sous tous les doutes réels) ; main de secrétaire | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 99 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 82-84 | 04/11/1743 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 85,1 % / 87,7 % (épelés 88,5 %) | atteint | aucune de mesure | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 100 | Loss → le Roi : **copie de relation** jointe à la correspondance avec Debrose (chiffrée pour Debrose) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 113-115 | 01/04/1744 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 94,7 % / 96,2 % (épelés 95,8 %) | atteint ; **copie de relation** ; passage court (26 mots) | **copie de relation** au Roi jointe à une lettre à Debrose (comptée 1 lecture) ; original au Roi non consulté ; passage court | A prov. (original au Roi non consulté) | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 101 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 14-16 | 20/08/1742 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 84,1 % / 90,5 % (épelés 90,5 %) | atteint ; **longueur au seuil** (21 mots) | **longueur au seuil** (21 mots, dont 19 dans le bloc principal) | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |
| 102 | J. A. von Loss → général de Debrose (La Haye) | HStA Dresden, 10026 Geheimes Kabinett, Loc. 746/8, vues 120-123 | 17/04/1744 | E (clé d'époque « Debrais », HStA Dresden Loc. 00675/10 vue 24, retrouvée par nous) | 84,1 % / 80,0 % (épelés 87,0 %) | atteint, **marge nulle** (80,0 % par mot) | **marge nulle par mot** (80,0 % = 20/25) ; « Berlin » faute du chiffreur ; passage court | A prov. | [loss-debrose-1742-1746](loss-debrose-1742-1746/) |

Les numéros de résultat suivent l'ordre de confirmation par les vérificateurs. **Non inclus** (retirés ou douteux) : la pièce Espagnol 336 n°88 (retirée : 79,3 % sous le seuil sévère) ;
Espagnol 132 f.26r (étendue douteuse : ni date ni signature visibles) ; la pièce Espagnol 336 n°89 (partielle) ; Landsberg 5/1/1677 (partielle) ;
Ritthaler fol. 158v, 120v et 147r haut (partielles) ; Loss → Debrose : lectures partielles ou trop courtes (dont deux vérifiées sous le seuil) ; lectures mineures ou partielles non comptées.

## 4. Organisation du dépôt

```
README.md             ce fichier
METHODE.md            méthode détaillée, conventions de transcription, mesure sévère
<corpus>/README.md    présentation du corpus, clé, résultats, réserves, sources
<corpus>/cle/         nos clés (ou, pour une clé publiée par un tiers : référence + nos compléments/corrections)
<corpus>/<lettre>/    chiffre.txt (transcription), dechiffrement.txt (lecture brute signe à signe, si disponible), lecture.md (texte, traduction, taux, réserves, liens)
LICENSE, LICENSE-DONNEES.md, CITATION.cff, .zenodo.json
```

## 5. Licence et citation

- Textes, transcriptions, clés et lectures : **CC BY 4.0** (voir [LICENSE-DONNEES.md](LICENSE-DONNEES.md)).
- Scripts éventuels : **MIT** (voir [LICENSE](LICENSE)).
- Les clés publiées par des tiers (S. Tomokiyo, cryptiana ; Devos 1950 ; etc.) **ne sont pas redistribuées** ici : elles restent la propriété de leurs auteurs et sont seulement citées.
- Citer ce dépôt : voir [CITATION.cff](CITATION.cff).

## Journal des versions / Changelog

- **1.2.1 (02/10/2026)** : aucune nouvelle lecture (toujours 102 = 99 confirmées + 3 partielles) ; taux officiels inchangés. DOI de la version 1.2.0 ajouté.
  **Malsburg 1637** : le dossier complet (Arcinsys Hessen, 44 p.) contient les mises en clair d'époque de f.18 et de f.28-29, trouvées après nos lectures ; comparées à l'aveugle,
  elles valident la clé cassée à l'aveugle (f.18 : 92,8 % des mots épelés, 97,6 % des lettres ; une valeur rare fausse, 12 = p) ; **nouveauté des résultats n°55 et n°65 révisée** :
  « clé cassée à l'aveugle, validée a posteriori par la mise en clair d'époque du même dossier » (contenu non inédit). **Hesse 1824** (résultat n°51) : système confirmé par le
  tableau de Vigenère d'époque du même dossier (fol. 237 ; alphabet cyclique de 35 signes ; modulo 29 réfuté). Santa Cruz 1631-1635 : tests de généralisation notés « test n°NN ».
  Dossier Malsburg : renvois de fichiers manquants rétablis.
- **1.2.0 (01/10/2026)** : 102 lectures = 99 confirmées + 3 partielles (résultats n°10, 16, 22). Ajouts depuis la 1.1.0 (résultats n°80 à n°102) :
  résultats n°80, 81 et 83 Ritthaler 1681 (HAB Wolfenbüttel ; clé reconstruite depuis une paire glosée du même volume ; chiffre trivial) ;
  résultat n°82 Vind → Krag 1647 (Rigsarkivet ; clé cassée à l'aveugle ; chiffre trivial) ;
  **résultats n°86 et n°89 Santa Cruz 1635 (clé d'époque « Cifra general del año 1635 » retrouvée par nous dans un autre fonds ; elle confirme notre reconstruction antérieure)** ;
  **résultats n°84, 85, 87, 88 et 90 à 102 Loss → Debrose 1742-1746 (Archives de Saxe, Dresde ; clé d'époque « Debrais » retrouvée par nous dans un autre volume)** ;
  le résultat n°100 est une **copie** de la relation de Loss au Roi du 1/4/1744, jointe à la correspondance, comptée comme une lecture (décision de l'équipe).
  Convention « résultat n°NN » pour désigner nos résultats (les numéros de pièces des manuscrits, ex. « Espagnol 132 n°88 », gardent leur forme). DOI de la version 1.1.0 ajouté.
  Espagnol 132 : corrections de transcription du vérificateur reportées (f.32 L13 ; f.81 R10) ou signalées comme non tranchées (f.32 V14 ; f.81 R10 « S+? »).
- **1.1.0 (29/09/2026)** : 79 lectures = 76 confirmées + 3 partielles (résultats n°10, 16, 22). Ajouts depuis la 1.0 :
  résultat n°76 Grana 1650 (clé reconstruite depuis une paire d'époque) ; **résultat n°77 Charles X Gustave 1657 (clé cassée à l'aveugle, validée par un original en clair d'époque)** ;
  résultat n°11 Montholon 1589 réintégré (relue en entier avec la clé d'époque Nevers n°71, identifiée par nous ; de « partielle » à « confirmée avec réserves ») ;
  résultats n°78-79 Landsberg → Schmidtman 1677 (première lecture avec la clé d'époque retrouvée dans le même volume).
- **1.0 (29/09/2026)** : première version publique, 75 lectures = 71 confirmées + 4 partielles (résultats n°10, 11, 16, 22).

## Citer / How to cite

Descifrado, *Cabinet Noir : lectures vérifiées de lettres chiffrées historiques (XVIe-XIXe siècle)*, Zenodo, 2026. DOI (toutes versions / all versions) : [10.5281/zenodo.23039566](https://doi.org/10.5281/zenodo.23039566) ; version 1.0 : [10.5281/zenodo.23039567](https://doi.org/10.5281/zenodo.23039567) ; version 1.1.0 : [10.5281/zenodo.23069237](https://doi.org/10.5281/zenodo.23069237) ; version 1.2.0 : [10.5281/zenodo.23088750](https://doi.org/10.5281/zenodo.23088750). Voir aussi [CITATION.cff](CITATION.cff).
