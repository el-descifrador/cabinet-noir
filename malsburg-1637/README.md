# Otto von der Malsburg au landgrave de Hesse-Cassel (janvier-avril 1637) : six lettres chiffrées lues

**HStAM 4 h Nr. 1411 (f.3, f.14, f.18, f.23-24, f.25, f.28-29). Étiquette : « clé cassée à l'aveugle par nous », lue en parallèle d'un autre projet qui a publié le premier.**

## Antériorité et lecture parallèle (à lire d'abord)

Ce fonds a été cassé et lu **indépendamment et en parallèle** par le projet public **dbourdeau/cyphersolver** (D. Bourdeau), qui l'a **publié le premier**
le 29/09/2026 (dossier `targets/malsburg1637`, « ciphertext-only », 10 lettres). Nous ne revendiquons **aucune priorité**. Notre travail (cassage le 28/09/2026,
non publié alors) vaut **confirmation indépendante** : les deux clés, obtenues à l'aveugle par deux solveurs différents, **concordent sur 81 des 88 valeurs
communes** (écarts : 12, 14, 17, 33, 34, 75, 85, surtout des valeurs rares (1 à 4 occurrences) ou hypothétiques chez nous ; leur valeur 20 n'a pas d'équivalent chez nous).
Nous présentons nos six lectures, avec les taux de nos vérificateurs, comme une seconde lecture indépendante.
Référence : https://github.com/dbourdeau/cyphersolver/tree/main/targets/malsburg1637

## Résumé

Le dossier HStAM 4 h Nr. 1411 (« Korrespondenz in Chiffren mit dem Generalkommissar Otto v. d. Malsburg betr. Kriegführung in Münster und Westfalen »)
réunit les lettres qu'Otto von der Malsburg, commissaire général hessois, envoie de Wesel au landgrave Guillaume V de Hesse-Cassel pendant l'hiver 1636-1637.
Les passages sensibles sont chiffrés en nombres de deux chiffres, avec des majuscules isolées et des codes à trois chiffres. Les 14 notices du portail
HCPortal (496-509) portent toutes le statut « Not solved » ; un concurrent (cipher-lab) avait attaqué le dossier le 26/09 sans obtenir aucune valeur.

Nous avons **cassé la clé à l'aveugle** par un solveur homophone (recuit simulé sur 5-grammes allemands), sans aucune valeur imposée. La clé obtenue,
**figée ensuite**, se généralise à des lettres que le solveur n'a jamais vues. Six lettres entières ont été lues et confirmées par des vérificateurs
indépendants : **f.3 (15/1/1637), f.14 (16/26 janv. 1637), f.23-24 (7/2/1637), f.18 (14/24 févr. 1637), f.25 (23 févr./5 mars 1637) et f.28-29 (28/3 v. st. = 7/4/1637)**,
résultats n°53, 60, 67, 55, 57 et 65 du projet, **tous « confirmés avec réserves »**. Deux d'entre elles (f.3, f.23-24) faisaient partie du flux du solveur : ce sont des
**lectures de lettres ayant servi au cassage**, pas des preuves supplémentaires de la clé ; les quatre autres sont des **généralisations** (dont f.28-29, 3 177 groupes).
La principale réserve est commune : **aucun code à trois chiffres n'est résolu**, si bien que les noms de personnes et de lieux les plus importants restent cachés,
et le taux par mot reste sous 80 % pour f.3, f.14 et f.28-29 (f.23-24 : 80,4 % en morceaux, 79,7 % en mots fusionnés). **Le front est ÉPUISÉ** (voir § 6).

Le contenu relève de l'intendance et de la guerre en Westphalie : entretien des garnisons, sauf-conduit pour des envoyés aux pourparlers de paix,
soldats gelés et amputés, convoi de ravitaillement vers « Hermanstein » (Ehrenbreitstein), rançons de prisonniers et lettres de change ; au printemps 1637,
le transport du train d'artillerie et la préparation du repli vers la Frise orientale (Leerort, Stickhausen, Reiderland, pays de Hadeln).

## 1. Le document

| | |
|---|---|
| **Cote** | Hessisches Staatsarchiv Marburg (HStAM), **4 h Nr. 1411**, f.3-33 |
| **Images** | HCPortal, notices 496-509, images libres ; liste et SHA-1 : |
| **Auteur / destinataire** | Otto von der Malsburg → landgrave Guillaume V de Hesse-Cassel (« Durchlauchtiger Hochgeborner Gnädiger Fürst und Herr », « E. F. G. ») |
| **Lieu, dates** | janvier-mars 1637 ; Wesel (place tenue par les Provinces-Unies) pour f.12, f.14, f.16 et f.25 (lieu de f.3 et f.18 non relevé dans nos fichiers) ; double datation ancien/nouveau style |
| **Forme** | lettres mêlant clair et chiffre ; le chiffre = nombres 10-99, majuscules isolées, codes à 3 chiffres, quelques signes (#, ∇, ¤, j) |
| **Statut avant ce travail** | HCPortal « Not solved » (contrôlé en direct à 18:24, 18:35 et 20:04 UTC le 28/09), `cipher_key_id: null` ; cipher-lab (NoAutopilot) « partial », tous essais homophones négatifs, « no candidate word assigned anywhere » ; cyphersolver « Not solved » ; aaymeloglu : absent |

## 2. Méthode

1. **Transcription** des nombres sur les images natives (tuiles sans réduction) →.
 Le flux soumis au solveur (, 2 196 nombres de 10 à 99, avec coupures) vient de f.3, f.23-24 et des 5 lignes chiffrées de f.15 ;
 il ne contient **aucune** valeur injectée.
2. **Solveur** : recuit homophone, 5-grammes lissés sur un corpus allemand du XVIIᵉ siècle
 (Simplicissimus), terme KL et plancher par fenêtre (`-f -5`) pour résister aux fautes de transcription. L'option `-F` (valeurs imposées) n'est **pas** utilisée.
 Commande exacte dans (§ Méthode).
3. **Résultat** : un **homophone à lettres**, 86 nombres → 22 lettres. Les **majuscules** isolées sont des homophones de polygrammes
 (N/D = ch, Y/G = ei, O/Z = st, S/F = au, X = sch, R/E = mm, P/W = ss, L = tt, T = ff, H = ll, signe « 1/j » = sch ; A = t et M = nn ajoutés en v6),
 établies en contexte (≥ 2 contextes clairs = PROUVÉ), puisqu'elles ne sont pas dans le flux du solveur.
4. **Reproduction indépendante** (vérificateur, graines 21 et 22) : **4 redémarrages sur 6** atteignent l'optimum, et cet optimum est **la même clé, 86 valeurs sur 86**
 (le casseur annonçait 6/6 ; les 2 autres redémarrages restent dans un optimum local nettement moins bon).
5. **Dépendance au modèle de langue** : avec un corpus moderne, le solveur ne retrouve que 72/86 valeurs ; les 14 écarts portent sur des valeurs rares ou moyennes,
 et le contexte tranche pour la clé figée partout où il est vérifiable (*noch*, *nit*, *platten*, *tractaten*, *könig*…). L'écart tient à l'orthographe du modèle.
6. **Distance d'unicité** (Shannon) : clé de 86·log2(22) ≈ 383 bits ; selon l'entropie supposée de l'allemand (1,0 à 2,0 bits/lettre), U ≈ **111 à 156 lettres**
 (≈ 157-163 en comptant les majuscules). Le flux de 2 196 jetons représente **14 à 20 fois U**. Lecture honnête : la marge est confortable **pour la clé dans son ensemble**,
 pas pour les **valeurs rares** (1 à 4 occurrences : 12, 17, 33, 34, 64, 75, 86), qui restent individuellement sous-déterminées.
7. **Généralisation hors échantillon** (l'argument décisif) : le vérificateur a transcrit à l'aveugle f.18, lettre **absente du flux** ; avec la clé figée, elle donne de l'allemand suivi,
 et un test contre **500 clés nulles** (permutations de la clé, modèle 4-grammes construit sur un **autre** corpus que le solveur) donne **z = 14,8, 0/500** clés nulles au niveau de la clé
 (f.3 : z = 17,4). Les lettres f.14 et f.25 ont ensuite été lues avec une clé **figée avant l'ouverture de leurs images** (horodatages : f.14, clé figée 20:18:21, 1re image 20:18:51 UTC).
8. **Mesure sévère scriptée** par chaque vérificateur, avec **son propre script, sa propre transcription/annotation et une copie figée de la clé** : sont comptés « non compris »
 les codes à 3 chiffres, chiffres isolés et signes, les majuscules non PROUVÉES, tout groupe dont la valeur ne colle pas au mot, tout mot opaque, les groupes cachés au bord.

**Clé** : `cle/malsburg1637_v7.tsv` (sha256 7dd87ba2…) ; majuscules `cle/malsburg1637_majuscules_v6.tsv` ;
codes (tous HYP) `cle/malsburg1637_codes_HYP.tsv`. Historique des versions :
- **v5** (19:47) : 2 valeurs corrigées, **78 = l** (et non e) et **40 = z** (et non w), erreurs signalées par le vérificateur de f.18 ; validées par celui de f.25
 comme **justifiées et non circulaires** (sur f.25, jamais vue auparavant : 40 = z 5/5, 78 = l 7/8).
- **v6** : majuscules A = t et M = nn passées PROUVÉES.
- **v7** (r11, 21:45-21:55) : passe de clé documenté sur 78 ; **78 = l confirmé** par 17 contextes dans 5 lettres, h réfuté (les 3 contextes « contraires » étaient des fautes de lecture
 de 18, 48 et 28, vérifiées au zoom) ; 85 = r passé PROUVÉ ; 53 = b ajouté en HYP. **Aucune valeur changée** par rapport à v6.
 Restent HYP : 17, 33, 34, 64, 75, et les majuscules B, Q, C, V, GG.
- **v8** (`cle/malsburg1637_v8.tsv`, sha256 8d185d6c…, figée 23:33:02 avant la transcription de f.23-24). f.28-29 a été lue avec la **v7 figée** (7dd87ba2, gel 22:20:04,
 1er dérivé d'image 22:20:11). À corriger par une passe de clé documentée (vérificateur de f.23-24) : **12 = c → HYP** (ses 3 contextes cités sont dans des mots opaques ; −1 groupe sur f.18) ;
 85 = r n'a qu'un appui entièrement compris hors f.23-24 (*nunmer*, f.12).

## 3. Résultats par lettre

Taux de **référence** = ceux du vérificateur indépendant (sa transcription, son script). La colonne « v7 » est la re-mesure du 28/09 21:52 par le casseur
(même script pour toutes les lettres, clé v7) : **aucune lettre ne baisse, aucune ne passe sous 80 % par groupe**.

| n° | lettre | groupes | vérificateur : groupe / mot | vérificateur : pessimiste (groupe / mot) | re-mesure v7 (casseur) | accord transcription aveugle |
|---|---|---|---|---|---|---|
| **53** | **f.3**, 15/1/1637 | 454-456 | **86,8 % / 72,2 %** | 82,4 % / 71,3 % | 85,5 % / 74,5 % | 451/462 = 97,6 % (lettre entière) |
| **55** | **f.18**, 14/24 févr. 1637 (HCPortal 504) | 638 | **93,6 % / 82,6 %** | 87,5 % / 80,5 % | 95,1 % / 86,2 % (pess. 89,3 / 80,6) | 631/638 = 98,9 % (lettre entière) |
| **57** | **f.25**, Wesel 23 févr./5 mars 1637 (HCPortal 506) | 592 | **94,1 % / 83,5 %** | 87,3 % / **77,7 %** | 94,4 % / 86,0 % (pess. 87,7 / 80,0) | 216/229 = 94,3 % brut (9 lignes ; 10 des 13 écarts tranchés pour le casseur au zoom) |
| **60** | **f.14**, Wesel 16/26 janv. 1637 (HCPortal 502) | 702 (721 avec les cachés) | **87,0 % / 70,1 %** | **80,9 %** / 60,8 % | 86,9 % / 70,1 % | 255/265 = 96,2 % (l.0-7) |
| **67** | **f.23-24**, 7/2/1637 (HCPortal 505) — **lettre ayant servi au cassage** | 2 020 | **89,2 % / 80,4 %** (mots fusionnés 79,7 %) ; **non circulaire 89,2 % / 80,2 %** | 79,9 % / 74,0 % (casseur, 35 jetons tranchés au zoom = N) ; dur 88,0 / 79,8 | — (clé v8) | 347 groupes, 97,4 % brut, 99,1 % après zoom |
| **65** | **f.28-29**, Wesel 28/3 v. st. (7/4) 1637 (HCPortal 507) | 3 177 | **88,4 % / 76,1 %** (mots fusionnés ; 77,1 % en morceaux) | **84,6 %** / 73,2 % ; borne extrême 78,7 % | — (clé v7 figée) | 500 jetons, 95,4 % brut, ≈ 98,4 % après zoom, 0 erreur démontrée |

Toutes les lettres sont **entières** (salutation, blocs chiffrés, clôture datée et signée « Otto von der Malsburg(k) », vérifiées sur les vues d'ensemble).
**Critère du projet (≥ 80 % par groupe, mesure sévère) : atteint pour les six en mode principal** ; en pessimiste aussi, sauf f.23-24 (79,9 %). Par mot, f.3, f.14 et f.28-29
restent sous 80 % (réserve), f.25 aussi en mode pessimiste, f.23-24 en mots fusionnés (79,7 %). La marge pessimiste de f.14 est mince (80,9 %).

**f.23-24 (n°67) — audit de circularité.** La lettre formait ≈ 80 % du flux du solveur et plusieurs majuscules PROUVÉES tirent leurs contextes de f.23-24 : la circularité
est **structurelle**. Le vérificateur a donc mesuré une variante **non circulaire** (un signe n'est compris que s'il a ≥ 2 mots entièrement compris **hors** f.23-24, et même hors
f.3) : **1801/2020 = 89,2 %**, soit 1 groupe de moins (85 = r). Conclusion : **lecture d'une lettre ayant servi au cassage, comptée comme résultat séparé** (première lecture
de la plus longue lettre du fonds), mais **ni une nouvelle découverte, ni une preuve supplémentaire de la clé** (même cassure que n°53). Nuance : « figée avant ouverture »
ne vaut que pour cette campagne ; le casseur connaissait déjà le texte (rendus r2-r19), risque couvert par le pessimiste et l'aveugle du vérificateur.

**f.28-29 (n°65) — généralisation la plus forte.** 3 177 groupes, jamais dans le flux, rendus par une clé figée ailleurs (aucun contexte f.28-31 dans la clé) : allemand suivi
et réseau de lieux géographiquement juste. Nuance déclarée : le brouillon de transcription de cipher-lab pour f.28 avait été rendu (test z-score, inventaire des codes),
sans qu'aucune valeur en soit tirée : la clé a donc été figée avant la transcription et la lecture, plutôt qu'« avant ouverture ». f.30-31 = copie du même chiffré, témoin de
transcription seulement.

## 4. Contenu (lectures ; [n] = code non résolu, … = non compris, (?) = douteux)

- **f.3 (15/1/1637)** : Malsburg ne sait plus d'où tirer l'entretien des garnisons hessoises, puisque les contributions du « plat pays » prennent fin ; rations (*Commiß*)
 doubles pour les bas-officiers, *Viertel* de Cassel. Post-scriptum : « Es ist noch Zeit, dass man sich beim **König von Ungern** angebe wegen der **Friedenstractaten** und
 **salvum conductum** vor [¤] Gesandten nach [128] sollicitire ; [176] wird ohne [140] nit anfangen zu tractiren … derowegen Bettage hochnötig sein. »
 (Il est encore temps de s'adresser au roi de Hongrie — Ferdinand III — pour les traités de paix et de solliciter un sauf-conduit pour les envoyés ; d'où la nécessité de jours de prière.)
- **f.14 (16/26 janv. 1637)** : « Ist die **Proviandirung Hermanstein** zu[?] … führet Obristl. **Hoffman** das Volck » : convoi de ravitaillement vers Hermanstein
 (= Ehrenbreitstein, forme attestée au XVIIᵉ s. : *Despatches of William Perwich*, Camden 1903, « Coblents & Hermanstein »), par Mülheim, par-dessus [266], vers Siegburg ;
 officiers nommés (Wolbram, capitaine Helwig, Schmit, vom Roten, Adrian von Carpen) ; menace de Jean de Werth à Cologne ; retraite prévue par Marburg ou Korbach et Brilon ;
 « que cela se passe aussi bien qu'à Hanau ». Blocs 2-3 : un prince a écrit de sa main à ses conseillers secrets ; frais du convoi.
- **f.18 (14/24 févr. 1637)** : rapport d'hiver : « … so erfroren, dass auch etliche … zu Krüppeln(?) worden, und etliche Glieder haben müssen ablosen lassen ; so seint auch viel
 hernach gestorben … dass die Reiterei noch wohl so bald keinen Dienst wird tun können » ; obligation pour une perte possible « auf der Reise nach Hermanstein » ;
 « Ich sorge, [#] haben sich des [∇] an bewusstem Ort nit zu versichern, dann er sich schwerlich wird einschließen lassen. »
- **f.25 (23 févr./5 mars 1637)** : « [120] hat(?) sich nunmehr resolviret, die Fuhrleute zu contentiren » ; refus de payer transport, **rançon des prisonniers** et autres frais ;
 une lettre remise « zum vierten Mal » à [122] ; Malsburg presse un personnage d'aller chez son frère et de se tenir prêt à séjourner en Hesse ; en fin :
 « [128] will noch keine **Wechselbriefe** bekommen haben ». Le clair qui sépare les deux blocs rapporte que **Gallas** ramène son armée de France.

- **f.23-24 (7/2/1637)** : Hermanstein « nit effectivement proviandiret » ; la *Vergeltung* ne concerne que les *Befehlshaber* (français), qui s'obligent à « alle gefangene zu lösen,
 verehrungen zu geben » ; « der konig » ne veut pas payer les frais : « steck(en) also in der brühe, wissen nit womit wir ihn zwingen wollen » ; « den Obristen Wardenberg »
 (le clair de f.24 nomme les « Obristen Wartenburg ») ; tractations de paix : commission du **margrave Sigismond de Brandebourg** à **Stettin** avec les commissaires impériaux
 au sujet de [140] ; f.24 : « unsere garnisonen seint also verderbet », Rheiderland, les Suédois « in Meckelburg », « alhie einzuschiffen zu Winsen », « auf Newenburg … wegen der Leine ».
- **f.28-29 (28/3 v. st. = 7/4/1637, Wesel)** : Malsburg ne peut partir par terre avec le train d'artillerie (l'ennemi tient la campagne entre [149] et la Ruhr avec des dragons ;
 renforts de Lorraine) ; la voie d'eau est lente (navires, 12 canons de campagne, vent contraire, passeport des [168]) ; les nouvelles pièces de 12 livres sans affûts ni canonniers ;
 les colonels **Uffel** et **Karpf** retenus (mortiers ennemis à **Warendorf**) ; place de montre au pays de **Clèves** ; passage à **Leerort** ; jonction à **Cloppenburg ou Vechta** ;
 Osnabrück, Wildeshausen, Diepholz mal gardés ; **Fürstenau** ; le **Reiderland** à reprendre aux « Mansfelder » ; redoute frisonne près de **Stickhausen** ; le colonel Hohendorf
 au **Vegesack** ; quartier dans le **pays de Hadeln, « so Sachsen-Lauenburg zuständig ist »** — détail exact (exclave de Saxe-Lauenbourg) qu'un faux déchiffrement ne produirait pas.
 P.-S. en clair (1 000 Rthlr pour Brême, 3 500 ducats).

Les lectures complètes (allemand normalisé et traduction) sont dans (f.3, f.18),,,
,.

## 5. Réserves

1. **Aucun code à trois chiffres résolu** (201, 239, 273, 120, 122, 123, 128, 140, 148, 176, 191, 253…), ni les signes #, ∇, ¤, j : les personnes et lieux clés restent inconnus.
 Hypothèses non prouvées : 128 = Köln ? (congrès de Cologne 1636-37), 130 = Hamburg ?, 140 = (Krone) Schweden ? ; « Frankreich » n'est pas exclu pour 140.
2. **Taux par mot sous 80 %** pour f.3 (72,2 %), f.14 (70,1 %) et f.28-29 (76,1 %), pour f.23-24 en mots fusionnés (79,7 %), et pour f.25 en mode pessimiste (77,7 %). Passages opaques en f.3 (« so in flucht … bestehet », « wigemzugste »),
 deux mots opaques en f.18, *la{D}en* en f.25 (= *lachen* avec D = ch, compté non compris : probable faute du chiffreur pour *lassen*).
3. **Valeurs rares fragiles** (1 à 4 occurrences), sous-déterminées malgré la marge globale d'unicité.
4. **f.14** : 16 groupes cachés au bord droit (nombre estimé ; le mode pessimiste en compte 19) ; majuscules A = t et M = nn fragiles (effet : 2 groupes).
5. **f.3, L7** : 41 ou 71 non tranché sur l'image (compté non compris).
6. **Les deux premières versions de la clé contenaient deux erreurs** (78, 40), trouvées par un vérificateur et corrigées par une passe de clé documentée ; les mesures de référence
 de f.3 et f.18 ont été faites en comptant ces groupes comme non compris.
7. **Nouveauté A provisoire** : « non trouvé » ≠ « inédit ». Un déchiffrement ou une glose d'époque peut exister à Marbourg (glose marginale de f.15 à examiner) ;
 aucune édition n'a été consultée (Rommel, *Geschichte von Hessen*, t. VIII ; recueils d'*Urkunden*).
8. **Contexte historique non contrôlé** dans une source imprimée (fonction exacte de Malsburg, traité de Wesel de 1636, officiers nommés, Ehrenbreitstein, Gallas) :
 seuls les passages en clair et la cohérence de date ont été vérifiés. Aucune anachronie relevée.
9. Travail sur les **images HCPortal**, non sur l'original.
10. **f.3 et f.23-24 ont servi au cassage** : leurs taux ne prouvent pas la clé (ce sont f.14, f.18, f.25 et f.28-29 qui la valident). Codes non résolus de f.23-24 :
 120, 122, 128, 137, 140, 163, 177, 188, 189, 191, 200, 202, 212, 231, 269 ; Q = ai et B = ff HYP. f.28-29 : ≈ 40 codes, j = sch, ‡, majuscules HYP B, Q, C, V, K ;
 8 sites de l'aveugle du vérificateur non tranchés à l'image (comptés N en pessimiste) ; officiers (Uffel, Karpf, Hohendorf) et « Mansfelder » non vérifiés en édition.

## 6. Non inclus

Les autres pièces du fonds ne font pas partie de cette version : f.12 (post-scriptum dans un second système, non cassé), f.16 (lecture partielle < 80 %),
f.32-33 (second système). Aucun code à trois chiffres n'est proposé comme résolu.

## 7. Reproduire

- Solveur : `outils/hs2.c` (+ `outils/model.inc`), licence MIT. Compilation : `gcc -O2 -o hs2 outils/hs2.c -lm`.
- Flux soumis au solveur : `outils/flux_r2.txt` (2 196 nombres de f.3, f.23-24 et des 5 lignes chiffrées de f.15 ; « | » = coupure).
- Commande : `hs2 -m <corpus> -c outils/flux_r2.txt -i 1.5e7 -n 3 -t 8 -u 0.3 -l 1 -f -5 -s 11` (idem `-s 12` ; le vérificateur : `-s 21`, `-s 22`).
  `<corpus>` = texte allemand du XVIIᵉ siècle réduit à a-z (nous avons utilisé le *Simplicissimus* de Grimmelshausen, domaine public ; non fourni ici).
- Clés : `cle/malsburg1637_v7.tsv` (référence des mesures), `cle/malsburg1637_v8.tsv` (dernière), `cle/malsburg1637_majuscules_v6.tsv`, `cle/malsburg1637_codes_HYP.tsv`.
- Par lettre : `fXXX/chiffre.txt`, `fXXX/dechiffrement.txt`, `fXXX/lecture.md`.

## Sources

- Hessisches Staatsarchiv Marburg, 4 h Nr. 1411 ; images et notices HCPortal 496-509 (https://api.hcportal.eu/api/cryptograms/496 … 509).
- Projet parallèle : dbourdeau/cyphersolver, `targets/malsburg1637` (publié le 29/09/2026).
