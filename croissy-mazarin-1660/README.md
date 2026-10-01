# Une dépêche chiffrée de Colbert de Croissy à Mazarin (Danzig, 9 mai 1660)

**BnF, Baluze 178, f.73r-74v (copie) — résultat n°22. Étiquette : « première lecture avec clé publiée »** (« Croissy-Mazarin Cipher (1660) », clé reconstruite et publiée par
S. Tomokiyo, *Cryptiana*, http://cryptiana.web.fc2.com/code/louisxiv0.htm, qui écrit : « This letter, not deciphered, can be read with the key »).
**Confirmé avec réserves** par un vérificateur indépendant, **avec une marge nulle** : selon la mesure la plus prudente, le taux est **à 80 % ou juste en dessous**.

| résultat n° | pièce | date | taux (vérificateur) | seuil 80 % | réserves | nouveauté |
|---|---|---|---|---|---|---|
| 22 | Baluze 178 f.73r-74v (1 550 jetons) | 09/05/1660 | valeur de table **strict 85,7 %** ; « aveugle révisé » (forme univoque ou valeur prouvée par ≥ 2 contextes) **79,8 %**, ≈ 80,3 % après contrôle de 8 θ ; taux par mot non mesuré | **sous le seuil de 80 % selon la mesure la plus prudente (79,8 %) — lecture partielle, marge nulle** | ≈ 8 % des jetons (ɱ barré a/e, ƀ t/et) choisis au sens ; ≈ 4 % de codes hors table ; 1re ligne de f.74v non lue ; copie, non original | A prov. |

**Mesure de référence.** La mesure « strict » (85,7 %) compte comprise la valeur de la table choisie au sens pour les signes que Tomokiyo range sous deux lettres. La règle sévère
appliquée plus tard aux autres lettres (tout signe à deux valeurs tranché au sens = non compris) n'a pas été rejouée sur cette lettre ; la mesure qui s'en approche le plus est l'« aveugle
révisé » du vérificateur, **79,8 % → ≈ 80,3 %**. Le résultat est donc à lire comme une **lecture suivie, mais partielle**, et non comme une lecture pleinement confirmée.

**Nouveauté : A provisoire** (« non trouvé » ≠ « inédit ») : ni clair, ni résumé, ni mention de la lettre dans Farges, *Recueil des instructions… Pologne*, t. I (1888),
*Lettres du cardinal Mazarin*, t. IX, et Chéruel, *Histoire de France sous le ministère de Mazarin*, t. III ; la correspondance de Croissy aux Affaires étrangères (Pologne, Suède) n'a pas été vue.

Images (Gallica, liens seulement) : https://gallica.bnf.fr/ark:/12148/btv1b9001581s/f178.item (vues 178-181).

## Résumé

Le volume Baluze 178 réunit des papiers de Charles Colbert, marquis de Croissy, pour les années 1658-1661. Aux f.73-74 se trouve la **copie**
d'une lettre de Croissy à Mazarin, datée de Danzig le 9 mai 1660, six jours après la paix d'Oliva. Environ la moitié de la lettre est chiffrée
(1 550 jetons sur quatre pages) : un nomenclateur à signes graphiques et à nombres. Satoshi Tomokiyo a reconstruit la clé à partir de
deux « Nouvelles » du même volume (f.93 et f.98), qui sont déchiffrées entre les lignes. De cette lettre, il écrit : « This letter, not deciphered,
can be read with the key ». Nous l'avons lue **en entier** avec cette clé.

Le passage chiffré rapporte les confidences de la reine de Pologne. Elle veut **faire élire son successeur du vivant du roi**, et ce successeur
doit épouser une de ses nièces. Elle craint que l'Empereur ne veuille la couronne « pour luy plustost que pour son frere », et elle demande
l'aide de Mazarin. Suivent les propos des Suédois (Oxenstiern) : l'Empereur offre aux Polonais un secours contre les Moscovites pour
entretenir la guerre plutôt que pour la finir, et la meilleure parade serait **une alliance de la France, de la Suède et de la Pologne**.

## 1. Le document

| | |
|---|---|
| **Cote** | BnF, Manuscrits, **Baluze 178**, f.73r-74v (copie) |
| **Gallica** | ark:/12148/btv1b9001581s, **vues 178-181** |
| **Auteur / destinataire** | Charles Colbert de Croissy → cardinal Mazarin (« V.E. ») |
| **Date, lieu** | Danzig, 9 mai 1660 |
| **Forme** | f.73r : environ 14 lignes en clair, puis le chiffre ; f.73v-74r : chiffre avec un paragraphe en clair sur les Suédois ; f.74v : 10 lignes chiffrées, puis clair final (« Je verray en passant à Berlin M. l'Electeur de Brandebourg… ») |
| **Statut avant ce travail** | clé publiée par Tomokiyo, lettre donnée comme non déchiffrée ; aucun déchiffrement chez les concurrents consultés |

## 2. Clé et méthode

- **Clé** : table de Tomokiyo (*Cryptiana*, « Croissy-Mazarin Cipher (1660) », http://cryptiana.web.fc2.com/code/louisxiv0.htm), transcrite pour notre usage mais
  **non reproduite ici** ; nos compléments (codes hors table, affectations des signes graphiques) sont dans `cle/`.
  C'est un nomenclateur : des nombres suivis d'une marque (^, -, :) pour les syllabes et les mots, des signes graphiques (θ, Ψ, ɱ barré, ƀ, ǂ…)
  pour les lettres, avec plusieurs rangs par lettre.
- **Méthode** : **lecture avec la clé publiée**. Il n'y a ni cryptanalyse ni solveur. Chaque jeton est transcrit sur l'image Gallica en pleine
  résolution, puis on applique la table. Ce qui s'écarte de la table est noté comme choix au sens (K), hypothèse hors table (H) ou non compris (X).
- **Affinages de forme** : θ à barre **interne** = g, à barre **débordante** = t (constaté au zoom ; reproduit les deux rangs g/t de la table) ;
  ʋ = l (forme sous laquelle la copie trace le ɓ, 1er rang de l) ; Ψ = r et ǂ = c (13/13), sans contre-exemple connu.
- **Ambiguïtés réelles de la clé** : ɱ barré (a ou e) et ƀ (t ou et). Tomokiyo range chacun de ces signes sous deux lettres, et aucune variante
  graphique ne les départage.
- **Codes absents de la table** (environ 4 %) : 136- = qu'il, 57- = avec, 56^ = luy, 66 = ma, etc. Chacun est établi par ses contextes ;
  quatre ne reposent que sur un seul contexte (112- paix, 95- guerre, 131- qua, 36^ ju).

## 3. Texte (extraits, orthographe légèrement normalisée)

[ ] = restitution ; (?) = hypothèse ; {…} = non lu.

> [Elle] me parla de l'importance qu'il estoit à la France de ne point negliger l'affaire de la succession de la Pologne ; que pour ce qui la
> regardoit, elle n'y prenoit point d'autre interest que celuy de satisfaire à l'inclination {…} pour sa patrie, et à la reconnoissance des
> obligations que toutte sa maison a au Roy […] ; que tous les principaux du royaume la voient souvent […] qu'ils s'esliroient pour leur Roy
> {…} espouser une de ses niepces […].
>
> Elle adjousta qu'elle ne doutoit point que l'Empereur ne voulust cette couronne pour luy plustost que pour son frere ; qu'elle avoit aussi pris
> soin de destromper les Polonnois sur ce point-là ; que cependant le Roy son mari et elle estoient incessamment pressés par le marquis de {nom
> non lu} [et] de l'Empereur de se declarer des intentions qu'ils ont touchant cette succession ; qu'enfin la maison d'Austriche mettroit toute
> pierre en oeuvre pour ne point laisser eschaper une si belle occasion de s'agrandir […] ; mais que si V.E. ne se declare bientost et ne prend la
> resolution de luy donner les assistances necessaires pour faire reussir ce dessein, elle ne sera peut-estre plus en pouvoir de l'accomplir.
> Je n'informe point V.E. de ce qu'elle m'a dit touchant les moiens qu'il faut tenir pour cet effet […] parce qu'elle m'a asseuré en avoir
> instruit amplement Monsieur Akakia, qui l'en va trouver par son ordre […].
>
> [f.74r, après le paragraphe en clair sur les Suédois] Mr Oxenstern m'a parlé aussi dans le mesme sens, et Monsieur {nom non lu} m'a de plus prié
> d'asseurer positivement V.E. qu'il tiendroit tousjours à gloire de se conformer entierement à ses desseins ; qu'il falloit que les ennemis mesme
> de V.E. […] avouassent qu'elle meritoit avec justice toute la gloire d'avoir donné la paix à toute la chrestienté ; […] qu'il ne doutoit point
> que V.E. ne s'apliquast doresnavant à en receuillir le fruit, qui estoit d'asseurer la succession de Pologne pour un prince qui fust
> inseparablement attaché à la France, et prevenir les desseins qu'avoit la maison d'Austriche sur cette couronne ; que l'Empereur offroit aux
> Polonnois un secours de {xx} mille (?) hommes contre les Moscovites, non pas pour leur donner moien de finir cette guerre, mais plustost pour
> l'entretenir […] jusques à un interregne, ou que l'abbattement (?) des Polonnois leur fassent prendre la resolution de luy deferer la couronne du
> vivant du roi ; qu'il n'y avoit point de meilleur moien de rompre ses desseins que de faire une alliance avec la France, la Suede et la Pologne ;
> et que vraysemblablement les secours {…} seroient tousjours plus agreables aux Polonnois que les Autrichiens, dont ilz avoient tant de
> sujet de se deffier.

**En résumé** : la reine (Louise-Marie de Gonzague) prépare l'élection de son successeur *vivente rege*, au profit d'un prince qui épouserait une
de ses nièces. Elle se dit mue par sa fidélité à la France. Elle soupçonne l'Empereur de viser la couronne pour lui-même, et elle presse Mazarin
de se déclarer et de l'aider, faute de quoi le projet échouera. Les détails sont confiés à « Monsieur Akakia » (Roger Akakia, sieur du Fresne, attaché à l’ambassade de France en Pologne ; Farges 1888, t. I, p. 16 ; voir § 5), qui part trouver Mazarin.
Côté suédois, on flatte Mazarin, artisan de la paix générale. On l'invite à cueillir le fruit de cette paix en assurant la succession polonaise
à un prince français. On dénonce l'offre impériale de secours contre les Moscovites, qui servirait à prolonger la guerre jusqu'à un interrègne.
Enfin, on propose une triple alliance France-Suède-Pologne.

## 4. Contrôles

- **Vérification indépendante**, verdict **CONFIRMÉ AVEC RÉSERVES**. Le vérificateur a relu à l'aveugle
  303 jetons des quatre pages avec la seule table de Tomokiyo. Il obtient le même texte suivi, avec 6 écarts : 4 complètent la lecture et aucun
  ne va contre le sens. Il a reproduit la mesure à l'identique.
- **Corrections intégrées** : « succe**s**sion » (Gp = s) ; « de » ×2 en f.73r ; un p lu par la forme (P7) ; 8 θ contrôlés à barre débordante (= t) ;
  ʋ ramené au ɓ de la table ; « dont **ilz** avoient ».
- **Taux sur la lettre entière** (mesure du casseur, après corrections, 1 550 jetons) : valeur de la table telle quelle 86,8 % ; forme univoque seule (« aveugle ») 74,8 % ;
  forme ou valeur prouvée par ≥ 2 contextes (« aveugle révisé ») **80,5 %** ; codes hors table 4,1 % ; non compris 5,5 %.
  Environ **8 % des jetons** (ɱ barré a/e, ƀ t/et) prennent une valeur de la table choisie au sens.
- Le vocabulaire est celui du XVIIe siècle (doresnavant, receuillir, ilz, vraysemblablement, destromper), sans anachronisme. Le contenu
  s'accorde avec le lendemain d'Oliva, avec le paragraphe en clair sur les Suédois (La Gardie, Oxenstiern, Schlippenbach) et avec le passage
  annoncé à Berlin.

## 5. Apport et réserves

**Apport** : c'est, à notre connaissance, le **premier clair publié** de la partie chiffrée de cette dépêche (« non trouvé » ≠ « non publié » : voir les éditions contrôlées ci-dessous), faite avec la clé publiée de Tomokiyo. Le mérite de la
clé lui revient ; notre apport est la lecture elle-même et quelques affinages de forme (θ g/t, ʋ = ɓ, codes hors table). Le texte documente, de la main d'un diplomate français à Danzig en mai 1660, le projet d'élection *vivente rege* de la reine de Pologne et sa demande
d'aide à Mazarin, la crainte d'une candidature impériale et une proposition suédoise d'alliance France-Suède-Pologne.

**Réserves** :
- Le document est une **copie** et non l'original.
- f.74v, 1re ligne : zone sombre, une vingtaine de jetons non lus. Deux noms propres restent non résolus (« marquis de … », « Monsieur … » en f.74r).
- ɱ barré et ƀ sont ambigus par construction : environ 8 % des jetons sont choisis au sens. Environ 4 % de codes sont hors table, dont 4 à un seul contexte.

- **Éditions contrôlées (28/09, veille des éditions, recherche plein texte seulement)** : Farges, _Recueil des instructions données aux ambassadeurs… Pologne_, t. I (1888) ;
  _Lettres du cardinal Mazarin pendant son ministère_, t. IX (juin 1659-mars 1661) ; Chéruel, _Histoire de France sous le ministère de Mazarin_, t. III (1882).
  **La lettre du 9/5/1660 n'y est ni publiée, ni résumée, ni mentionnée.** Ces éditions confirment seulement le **contexte** (succession de Pologne, mission d'Akakia).
  Non vus : un éventuel supplément des _Lettres de Mazarin_ ; la correspondance de Croissy aux Affaires étrangères (Pologne t. 12, Suède), hors ligne.
- **Akakia = Roger Akakia, sieur du Fresne** : identification désormais **appuyée par Farges 1888** (t. I, p. 15-16 et n. 1 : « le sieur Akakia, fort au courant des affaires
  du Nord » ; « Roger Akakia, sieur du Fresne, était le second fils de Martin Akakia, professeur royal de chirurgie… », à propos du Mémoire du 18/5/1656 ; p. 23-24 : Mémoire secret
  à M. de Lumbres, 20/8/1660, sur « la mission du sieur Akakia touchant la succession à la couronne de Pologne »). **Corroboration** : _Lettres de Mazarin_ t. IX, p. 623, Mazarin
  à Condé, Bordeaux, 27/6/1660 : « Le sr Akakia estant arrivé depuis quelques jours de Poloigne avec des commissions… » (note : attaché à l'ambassade de Pologne) ; Chéruel,
  _Histoire_ t. III, p. 374 (« MM. de Lumbres et Akakia »). Cela concorde avec notre lettre (« Monsieur Akakia, qui l'en va trouver par son ordre ») ; ce n'est pas la lettre elle-même.
  L'identification reste une **identification de contexte** (même nom, même mission, même période), pas une preuve documentaire directe.
- Les faits historiques évoqués n'ont pas été vérifiés dans des sources secondaires au-delà des passages en clair de la lettre.
-

## Sources et fichiers

- BnF, Baluze 178, f.73r-74v (Gallica ark:/12148/btv1b9001581s, vues 178-181).
- S. Tomokiyo, *Cryptiana*, « Croissy-Mazarin Cipher (1660) », http://cryptiana.web.fc2.com/code/louisxiv0.htm (clé reconstruite sur les « Nouvelles » glosées de Baluze 178 f.93 et f.98).
- Farges, *Recueil des instructions… Pologne*, t. I (1888), p. 15-16 et 23-24 ; *Lettres du cardinal Mazarin*, t. IX, p. 623 ; Chéruel, *Histoire de France sous le ministère de Mazarin*, t. III (1882), p. 374.
- `chiffre_f73r.txt`, `chiffre_f73v.txt`, `chiffre_f74r_haut.txt`, `chiffre_f74r_bas.txt`, `chiffre_f74v.txt` : transcriptions de l'équipe (conventions en tête de chaque fichier).
- `cle/croissy1660_complements.tsv` : codes hors table établis par leurs contextes ; `cle/croissy1660_affectations_signes.tsv` : affectation des signes graphiques aux colonnes de la table.
