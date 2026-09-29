# « Scituation de l'isle d'Alboran » : un mémoire presque entièrement chiffré du commandeur de Nuchèze (BnF, Mélanges de Colbert 108, f.222r-223r, 1662)

**Résultat n°50. Étiquette : « première lecture avec clé publiée »** (clé « Floridor » de S. Tomokiyo + deux valeurs prouvées par une glose d'époque). **Confirmé avec réserves**
par un vérificateur indépendant : **697/709 = 98,3 % des groupes, 124/134 = 92,5 % des mots chiffrés** (seuil de 80 % atteint). Nouveauté **B fragile** : Tomokiyo en cite l'ouverture (9 mots).
Voir aussi le [README du dossier](README.md) (mémoire au « grand maistre », n°47, même chiffre).

Images (Gallica, liens seulement) : https://gallica.bnf.fr/ark:/12148/btv1b10035507b/f228.item , https://gallica.bnf.fr/ark:/12148/btv1b10035507b/f229.item

## Résumé

Au printemps 1662, l'escadre de Beaufort et du vice-amiral **François de Nuchèze** (commandeur de Malte) croise sur la côte du Maroc, où l'on envisage un
établissement en Barbarie. Le 23 avril 1662, Nuchèze écrit à Colbert depuis la rade de Majorque une lettre signée « Floridor » (Mélanges de Colbert 108, f.218),
en partie chiffrée. **Satoshi Tomokiyo** (*Cryptiana*, page `louisxiv0.htm`, « Colbert-Nucheze Cipher (1662) ») a reconstitué ce chiffre, une simple substitution de
lettres par des nombres. Il signale que la pièce f.222, endossée « pour monsieur Colbert », « can be read with the reconstructed cipher », et n'en cite que
**l'ouverture (9 mots)** : « Scituation de l'isle d'Alboran. Alboran est une isle scituee.... ».

Nous avons lu **la pièce entière** avec sa clé (et deux valeurs, 9 = d et 1 = f, prouvées par la glose d'époque de la pièce sœur Colbert 109 f.559r). C'est un mémoire
de trois pages dont l'essentiel est chiffré (**134 mots chiffrés, 709 signes**, entre lesquels le clair ne donne que des mots de liaison) : description nautique d'Alboran (situation, dimensions, falaises, anse,
mouillage, fonds, faune), puis une remarque sur les îles **Zaffarines** (Chafarinas), où « on put faire une grande et belle place d'armes ». Un vérificateur
indépendant a relu à l'aveugle 542 des 709 signes (528 identiques, les écarts restants étant presque tous des homophones sans effet), corrigé deux points et
scripté une mesure sévère : **98,3 % par groupe, 92,5 % au mot**.

**Ce n'est pas une découverte cryptanalytique.** Notre apport : la lecture complète, la vérification et la mesure.

---

## 1. Le document

| | |
|---|---|
| **Cote** | BnF, Mélanges de Colbert 108, **f.222r-223r** (adresse f.223v) |
| **Gallica** | ark:/12148/btv1b10035507b : **v228** (f.221v / f.222r), **v229** (f.222v / f.223r), v230 (f.223v / f.224r) ; vue = f + 6 |
| **Titre** | « Scituation de l'isle d'Alboran » (2 lignes chiffrées en tête de f.222r) |
| **Nature** | mémoire joint à la lettre « Floridor » du 23/4/1662 (f.218) ; ni date ni signature (normal pour un mémoire joint) |
| **Forme** | clair à mots chiffrés : f.222r (titre + 26 l.), f.222v (27 l.), f.223r (10 l.) ; **134 mots chiffrés, 709 signes** (dont 3 hors mot : une rature de 2 signes f.222r l.2 et un « 3 » isolé f.222r l.4) |
| **Étendue** | pièce **ENTIÈRE** : titre en tête d'un feuillet neuf (f.222r) ; fin f.223r l.10 « …n'y apparament a faire chaux », reste de la page blanc ; **f.223v = adresse « pour monsieur Colbert » seule** (vue par le vérificateur) ; f.224r = autre lettre (Blois, 23/4/1662) |
| **Gloses** | **aucune glose d'époque** : les seuls signes interlinéaires sont des chiffres de la main du chiffreur (lettres finales écrites au-dessus faute de place : 44 ×2, 3, 6 ; une correction 40) |
| **Statut avant ce travail** | Tomokiyo : clé + ouverture (9 mots) ; concurrents : catalogues seulement |

## 2. La clé (Tomokiyo, créditée)

- **Table imprimée par Tomokiyo**, reconstruite par lui sur Colbert 108 f.218 (non reproduite ici ; 26 valeurs ; ex. 16 et 26 = a, 3 = e,
  36 = s, 38 = o, 44 = r ; 59 et 63 = nulles ; 15 = « e? » douteux chez Tomokiyo, **exclu**).
- **Ajouts prouvés par la glose d'époque** de la pièce sœur Colbert 109 **f.559r** (« description des isles [z]afarines », glosée lettre à lettre) : **9 = d, 1 = f**
  (détail dans le [README du dossier](README.md), § 2).
- **Hors clé** : **31** (« [z] » dans « [Z]efarines », même mot que la glose de f.559r, où la lettre glosée est incertaine) → **31 = z reste HYP**, compté non compris ;
  **8** (un seul cas douteux, § 4).
- Le vérificateur a travaillé **uniquement** sur des copies figées (empreintes md5 notées). **Aucune valeur n'a été tirée du sens.**

## 3. Méthode

1. **Transcription** (le casseur) sur les images natives ; **relecture 1:1 complète** (0 correction de groupe chiffré, 1 correction du clair).
2. **Lecture et mesure scriptées** : → (casseur : 698/710 = 98,3 %, 124/134 = 92,5 %).
3. **Vérification indépendante** (un vérificateur indépendant, 0 requête Gallica) : transcription **à l'aveugle** de 542/709 signes (76 %, sur les 3 pages), gelée à
  ** avant ouverture des fichiers du casseur (md5 `021758da…`) ; comparaison scriptée ; script de
   déchiffrement indépendant et mesure sévère scriptée. Contamination déclarée : le vérificateur avait lu le brief,
   les scores annoncés et l'ouverture citée par Tomokiyo avant le gel.

## 4. Texte lu (lecture corrigée par le vérificateur)

**Conventions.** Texte **chiffré** en romain ; les mots écrits **en clair** dans le manuscrit sont en *italique*. Graphie du document conservée (u/v et i/j selon
l'usage moderne). **†** = mot chiffré **non compris** en mesure sévère (§ 5). [ ] = lettre restituée. Coupe en paragraphes : la nôtre.

**Corrections du vérificateur intégrées** : f.222v l.10, « nordest » = `37.38.44.9.3.36.35` (un seul signe entre 9 et 36 : le casseur avait un 9 fantôme et lisait
« norddest ») ; f.222r l.7, premier signe de « longueur » = 3 ou 8 douteux (8 est hors clé) → « longueur » non compris.

> **Scituation de l'isle d'Alboran.**
>
> Alboran est une isle scituee [rature] dans le destroit a dix lieux nord *et* sud du cap de [3 isolé] Trois Forques, cost[e]† de Barbarie†. Sa longueur† *est de*
> huit *ou* neuf cents pas, *qui* s'estant† [= s'estend] nord nordest *et* sud surouest, *et la* largeur de deux cents cinquante [p]as†, gissant *est* sudest *et*
> ouest norouest, *presque tou[te]* plate *et* d'esgalle largeur, escarpee *tout au tour d'environ* cinq toises de hauteur. *Et au bout du* nord *une* roche
> *separée de* ladite isle *d'environ* quinse brasses, *presque esgale en* hauteur, *où il n'y a pas moins de* deux brasses d'eau *entre deux*.
>
> *Qui regarde le* surouest *il y a une* ance *pour* aborder *les* chaloupes *fort facillement, où il y a quantité de* loups ma[r]ins† *et* d'oiseaux *de* mer
> *comme* cormorans, goelans *et autres* oiseaux, *n'y ayant sur* ladite isle *aucune sorte* d'herbe *n'y* d'eau *n'y apparance d'y en* avoir *iamais* eu.
>
> _(f.222v)_ *Son* mouillage *est du* coste du nordest *environ un* quart de lieu *de* terre, *despuis vingt et cinq* brasses d'eau *iusques a* quarante,
> gros fonds, *comme* roche pourrie *et quelque* co[q]uillage† *meslé parmy*. *Tout* autour *de lad[ite]* isle, *a une* bonne portee de mo[u]squet† *de* terre,
> *il n'y a pas* moins *de* cinq *ou* six brasses d'eau, roche plate, *sans qu'il paroisse aucun* danger pour *les manteaux n'en* aprochant *pas* plus *de sept ou
> huict* cents pas, *de quelque* coste *qu'on* la puisse aborder.
>
> _(f.223r)_ *Dans la* iointe *des* isles [Z]efarines† *on put faire une grande et belle* place d'armes. Le bois *n'est pas* propre† a bastir, *estant fort* petit ;
> la pierre *n'est pas* propre *a* bastir, *n'y apparament a faire* chaux.

(Les limites exactes entre clair et chiffre suivent la segmentation du casseur, § Texte ; la répartition peut différer d'un mot près.)

### Résumé en français moderne (sous réserve)
Alboran est une île située dans le détroit, à dix lieues au nord du cap des Trois Fourches (Tres Forcas), sur la côte de Barbarie. Elle mesure 800 à 900 pas du
nord-nord-est au sud-sud-ouest et 250 pas de large ; presque plate, elle est escarpée tout autour sur environ cinq toises. Au nord, une roche séparée de l'île
par une quinzaine de brasses, avec au moins deux brasses d'eau dans le passage. Au sud-ouest, une anse où les chaloupes abordent facilement ; beaucoup de loups
marins, de cormorans et de goélands ; ni herbe ni eau. Le mouillage est au nord-est, à un quart de lieue de terre, par 25 à 40 brasses, sur un fond de roche pourrie
et de coquillage ; tout autour, à une portée de mousquet, au moins cinq ou six brasses, sans danger pour les navires qui ne s'approchent pas à moins de 700-800 pas.
Aux îles Zaffarines, on pourrait faire une grande et belle place d'armes ; le bois et la pierre n'y sont pas propres à bâtir, et il n'y a pas de quoi faire de la chaux.

**Remarques.** « les manteaux », en clair, est un nom couvert, déjà employé dans le mémoire Colbert 109 f.556 (navires ? **non résolu**, non compté). La dernière phrase
(« estant fort petit », « la pierre ») paraît porter sur les Zaffarines plutôt que sur Alboran ; la syntaxe ne permet pas de trancher.

## 5. Mesure (script du vérificateur, clé figée ; pièce entière)

Symbole compris = valeur dans la clé figée **et** tracé net (ni surcharge, rature, correction, doute). Mot compris = tous ses symboles compris **et** graphie attendue
(liste des erreurs du chiffreur fixée par le vérificateur **avant** la mesure). Rature et « 3 » isolé comptés non compris au dénominateur des groupes.

| Variante | Groupes | Mots |
|---|---|---|
| **A — RÉFÉRENCE** (lettres écrites au-dessus faute de place = lues ; Ↄ = 3) | **697/709 = 98,3 %** | **124/134 = 92,5 %** |
| P — pessimiste (lettres au-dessus, Ↄ et « s » de surouest = non compris) | 690/709 = 97,3 % | 117/134 = 87,3 % |
| casseur (reproduit tel quel par le vérificateur ; 710 signes, avec le 9 fantôme) | 698/710 = 98,3 % | 124/134 = 92,5 % |

**Les 10 mots non compris (A)** : cost (e omis) ; barbarie (surcharge) ; **longueur** (1er signe 3/8 douteux) ; sestant (= s'estend ?) ; cas (14 pour 40 = pas) ;
marains (a en trop) ; co[q]uillage (surcharge + q omis) ; mo[u]squet (u omis) ; [31]efarines (31 = z HYP) ; propre (40 corrigé, f.223r l.5). Même total que le casseur,
composition différente (le casseur comptait « longueur » compris et « nordest » non compris).

**Relecture aveugle** : 528/542 signes identiques ; 8 écarts 16 ↔ 26 **sans effet** (homophones de a) ; les autres écarts sont tranchés au § 4 ou sans effet sur la valeur.

## 6. Cohérence

- **Langue** : français de 1662 cohérent (scituée, destroit, quinse, d'esgalle, despuis, iamais, facillement, apparament, mosquet, brasses, toises, ance).
- **Géographie** (d'après les connaissances du vérificateur, **non sourcée**) : Alboran est bien à ≈ 10 lieues au nord du cap des Trois Fourches ; île plate, falaises tout
  autour, sans eau ni végétation ; la roche du nord = l'îlot de la Nube ; les « loups marins » = phoques moines, colonie historique d'Alboran.
- **Contexte 1662** : campagne Beaufort/Nuchèze sur la côte du Maroc (Zaffarines, Alhucemas ; La Roncière V p. 253-255) ; Clément III-1 n° 2 (Colbert à Nuchèze,
  7/7/1662) remercie pour « la description des îles Zéphalines » (= Zaffarines, cf. f.559r) et abandonne « l'entreprise qui avoit esté projetée ». La « place d'armes »
  aux Zaffarines s'inscrit dans ce projet d'établissement, abandonné à l'été 1662, avant Djidjelli (1664).

## 7. Nouveauté : B FRAGILE (« non trouvé » ≠ « inédit »)

- **Tomokiyo** : clé reconstruite, pièce dite lisible, **ouverture citée (9 mots)**. La clé n'est pas notre apport.
- **Concurrents** (dépôts publics) : catalogues et copie de la page Tomokiyo, **aucune lecture**.
- **Éditions contrôlées, 0** (veille des éditions) : La Roncière V, Clément I-VII, Depping I-IV, Jal *Du Quesne*, Masson 1903 (seule mention d'Alboran = concession de 1699,
  autre affaire), Monchicourt 1898 (recherche « Alboran » : 0 dans les deux parties, OCR vérifié sur « Zaffarines »), plein texte Gallica et Internet Archive.
- **Risque NON LEVÉ** : **Castries (éd.), *Les Sources inédites de l'histoire du Maroc*, 2e série, France, t. I**, non en ligne. Son index (1954) donne « Alboran, île. —
  T. I, 35 et n. 3, 50… » et place les pièces de la campagne Nuchèze/Beaufort d'avril 1662 aux p. 35-50. Un mémoire de trois pages imprimé en entier y est **peu probable**
  (Alboran n'y occupe qu'une page), mais un extrait ou un résumé (p. 35 n. 3, p. 50) est **possible**. **Vérification humaine en bibliothèque indispensable avant toute
  annonce** (SIHM 2e sér. France t. I, p. 33-66).
- **Formule** : « première lecture complète publiée à notre connaissance, avec la clé de Tomokiyo » ; jamais « premier déchiffrement ».

## 8. Réserves

1. **Clé publiée** (Tomokiyo), ouverture déjà citée : ce n'est pas une percée.
2. **Castries, SIHM 2e sér. France t. I, non vu** : nouveauté à confirmer par un humain.
3. 10 mots non compris en sévère : 6 erreurs du chiffreur (cost, sestant, cas, marains, co[q]uillage, mo[u]squet), 2 surcharges, 1 correction, 1 signe hors clé
   (31 = z HYP) ; et le 1er signe de « longueur » (3/8 douteux).
4. **Corrections du vérificateur non reportées** dans les fichiers du casseur (ce n'est pas mon rôle de les modifier) : f.222v l.10 = `37.38.44.9.3.36.35` (9 fantôme ;
   709 signes, pas 710) ; f.222r l.7 1er signe douteux.
5. Relecture aveugle partielle (76 % des signes) et contaminée (déclaré) ; f.221v revu seulement par l'éclaireur et le casseur ; **aucune relecture humaine** du manuscrit.
6. Identifications géographiques (Nube, phoques moines, Zaffarines = Chafarinas) non sourcées ici ; « les manteaux » non résolu.
7.

## 9. Fichiers

- `chiffre_f222.tsv` : transcription du mémoire ; `cle/floridor_ajouts_gloses.tsv` : nos ajouts prouvés par la glose d'époque (la table de Tomokiyo n'est pas reproduite).
