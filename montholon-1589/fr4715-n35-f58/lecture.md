# Montholon → duc de Nevers, Tours, 26/11/1589 — BnF, Français 4715, n°35, f.58r (résultat n°11)

- **Cote** : Bibliothèque nationale de France, Français 4715, n°35, f.58r.
- **Image** (Gallica, lien seulement) : https://gallica.bnf.fr/ark:/12148/btv1b52509819x/f131.item
- **Clé** : chiffre « Vieuville–Nevers » **reconstitué et publié par Satoshi Tomokiyo** (cryptiana, pages « BnF fr 4715 » et « Nevers »), non reproduit ici,
  + **nos compléments** (`../cle/montholon1589_complements.tsv`). **Étiquette : première lecture avec clé publiée** ; le mérite de la clé revient à son auteur.
- **Auteur / destinataire** : François (II) de Montholon, ancien garde des sceaux, à Louis de Gonzague, duc de Nevers.

## Verdict du vérificateur indépendant : CONFIRMÉ AVEC RÉSERVES

**≈ 80 % du chiffré compris, 78-79 % au niveau de la phrase selon le vérificateur (seuil frôlé, non atteint au sens strict)** ; 87,3 % des groupes tombent dans un mot, 81,3 % sans les groupes douteux ; 93,0 % des 887 groupes = table publiée. Relecture à l'aveugle de 206 groupes : 82 % d'accord par groupe, 90 % par chiffre (vérificateur non totalement aveugle, déclaré).

## Lecture ([..] = restitution ; ~NN = nom codé non résolu ; (?) = doute)

### Lecture (note de synthèse)

Lecture du casseur (passes 5-9), vérifiée par un vérificateur indépendant (28/09/2026, **confirmé avec réserves**). Notice BnF : « Lettre, avec chiffre, en partie déchiffrée, du Sr DE MONTHOLON. Tours, 26 novembre 1589 ». Sur le recto, une seule glose d'époque sûre : « legat » au-dessus de `'26 '26 30 25 95` (T1), qui concorde avec la valeur déjà publiée par Tomokiyo. Un bloc chiffré continu (R0t-R6, ≈ 590 groupes) et une dizaine de passages chiffrés insérés dans le clair (≈ 300 groupes) ; la clé s'applique **sans ajustement** (93 % des 887 groupes = table publiée).

> (bloc R0t-R6) « … il abandonnera, et lors … advis … ce qu'il aura … sur cest espoir … soit venant à l'effect, il l'auroit pour [son] ennemy et ceulx qui les suyvent, et sans apparence de pouvoir resister, pour n'avoir asseurance de … que ~35 … declare qu'il … (?) ; de sorte qu'est retenu pour ne sçavoir la volonté du legat … pour l'importance de l'affaire ; **que si le Roy se faict catholique, il est du tout resolu de le suivre, et si le legat n'y consentira et qu'il vouldra, à cause de son heresie et excommunication**, en favoriser d'aultre ; mais ce ~35 … il [ve]ult (?) **estre catholique sans [l']absolution precedente, qui ne se peult legitimement** … que par … qui l'a excommunié ; et toutesfois ils s'[y] arresteront … et mespriseront …, **dont s'ensuivra l'introduction du schisme** et les maux qu'amene. »
> (passages insérés) « [de] 64 qui abandonneront le Roy, voyans la vanité de leurs espoirs » ; « … a ce ne pouvant … il veult abuser le m[onde] » ; « **attendant les estrangers que Casimir doit amener en mars**, pendant lequel (?) temps il s'establira (?) » ; « … **mais vostre but est de complaire à Dieu plus qu'aux hommes**, aussi … » ; « … a declaré (?) que vous disposez ».

**Sens.** Montholon rend compte à Nevers des démarches auprès du légat sur la conversion d'Henri IV : un personnage (~35, non identifié) attend de connaître la volonté du légat ; si le Roi se fait catholique, il est résolu de le suivre, mais le légat refusera à cause de l'hérésie et de l'excommunication, car on ne peut être reçu catholique sans absolution préalable, que seul peut donner celui qui a excommunié (le pape : Henri de Navarre avait été excommunié par Sixte V en 1585) ; d'où le risque de « schisme », thème déjà présent dans n°48. Le conseil final à Nevers (« complaire à Dieu plus qu'aux hommes ») répond à son scrupule de servir un roi hérétique (cf. n°37). « Casimir » est écrit en lettres : Jean-Casimir du Palatinat (identification par le contexte ; une levée « en mars » est plausible comme projet ou bruit, **non comme fait**, à sourcer).

**Réserves du vérificateur.** (1) **≈ 80 % du chiffré compris** (≈ 78-79 % au niveau de la phrase selon le vérificateur) : les 87,3 % de la mesure comptent les groupes tombant dans un mot, et 81,3 % sans les groupes douteux ; le saut de ≈ 65 % à 87 % entre deux runs vient surtout d'un changement de définition. (2) Structure corrigée : la « fin du rang F » est la suite du rang E ; « il veult abuser le monde » **ne se rapporte pas à Casimir** ; la vraie suite de F (« pendant lequel (?) temps il s'establira (?) ») est une lecture du vérificateur, non encore relue par le casseur. (3) R4 : `19 '48` = « et qu'il vouldra » (relecture aveugle). (4) Restent ouverts : ~35 (personnage, aussi dans le clair « a ~35 de Bell… »), ~2, `52`, `64`, R2 « declare qu'il general de ~2 », R0t « Henry verra plus », le rang H et le début de E. (5) Le clair n'est lu qu'à ≈ 35-40 %, en survol. (6) **Nouveauté probable** : verso non vu ; déchiffrement d'époque conservé ailleurs non exclu ; GitHub de cipher-lab et cyphersolver à recontrôler avant toute annonce.

### Verdict détaillé du vérificateur

**Ce qui est confirmé**
- La pièce se lit avec la clé Vieuville–Nevers, sans aucun ajustement.
  - 93,0 % des 887 groupes sont des lettres ou des codes publiés par Tomokiyo.
  - le script de décodage restitue les phrases annoncées : « que si ~7 se faict catholique, il est du tout resolu de le suivre », « si le legat n'y consentira », « a cause de son heresie et excommunication », « estre catholique sans absolution precedente, qui ne se peult legitimement », « dont s'ensuivra l'introduction du schisme », « qui abandonneront ~7 voyans la vanité de leurs espoirs », « attendant les estrangers que Casimir doit amener en mars ».
- Ma relecture à l'aveugle de R4 et R5 reproduit la transcription de la passe 8 à 88-96 % par groupe (voir § 1).

**Réserves**
- **Le taux de 87,3 % n'est pas un taux de compréhension.** C'est un taux de groupes « dans un mot reconnu ».
  - Le saut de ≈ 65 % à 87 % vient surtout d'un **changement de définition** : les ≈ 60-65 % des passes 6-7 étaient des estimations « compris », pas des mesures.
  - Une petite part vient des relectures de R1, R2, R4 et R5, qui, elles, sont réelles et reproduites.
  - **Taux « chiffré compris » (au niveau de la phrase) recalculé : ≈ 78-79 %.** Le seuil de 80 % est frôlé, pas atteint au sens strict.
- **Erreur de structure dans F8.** La « fin de F » (Ft, x1960-3110) est en réalité la **suite du rang E**. Le vrai rang F se poursuit sur la ligne du dessous et n'est pas transcrit (voir § 1c). « il veult abuser le m[onde] » appartient donc à la phrase de E, pas à celle de Casimir.
- **Nouveauté probable**, avec les réserves habituelles : verso non vu, déchiffrement d'époque conservé ailleurs non exclu.

### Réserves et corrections du vérificateur

1. **Taux** : ne pas écrire « 87 % lu ». Écrire « ≈ 80 % du chiffré compris (87 % des groupes dans des mots, 81 % sans les groupes douteux) ».
2. **F8 est à scinder** (voir 1c) :
   - Ft (x1960-3110) = suite du rang E : « … a ce ne pouvant … il veult abuser le m[onde] » ;
   - la vraie suite de F, sous E, est à transcrire : `73 95 '2 16 46 50 95 23 60 70 83 '24 83 23 95 25 10 50 63 1 25` ≈ « pendant lequel (?) temps il s'establira (?) » ;
   - le clair « … sans lequel jamais il ne sera paisible … » appartient à la ligne au-dessus.
3. **R4** : « '19? ?? » → `19 '48` = « et qu'il vouldra » (à confirmer à ×4 par le casseur).
4. **Points toujours ouverts** : ~35, ~2, `52`, `64`, R2 « declare qu'il general de ~2 », R0t « Henry verra plus », H, et E (début).
5. **Glose « legat »** : confirmée. Elle concorde avec la valeur Tomokiyo de `'26 30 25 95` : ce n'est pas une valeur nouvelle.
6. **Nouveauté** probable ; verso et contrôle en ligne des concurrents à faire.

## Fichiers

- `chiffre.txt` : transcription du chiffré (groupes numériques, passages en clair entre crochets).
