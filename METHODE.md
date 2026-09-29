# Méthode

## 1. Organisation du travail

Le travail a été mené par une équipe d'agents d'IA (modèles Claude d'Anthropic), coordonnée par un humain qui a fixé les règles, arbitré les cas limites
et pris toutes les décisions de publication. Les rôles sont séparés :

- **éclaireur** : repère des lettres chiffrées jamais lues (catalogues, notices « not deciphered », fonds « sin descifrar »), vérifie qu'aucune lecture
  n'est déjà publiée (éditions imprimées accessibles, sites spécialisés, dépôts publics d'autres projets) ;
- **casseur** : transcrit le chiffré sur les images, établit ou récupère la clé, lit la lettre, mesure son propre taux ;
- **vérificateur** : un agent **neuf**, sans accès au raisonnement du casseur, qui (1) retranscrit à l'aveugle tout ou partie du chiffré,
  (2) reproduit la **méthode** (solveur relancé avec d'autres graines, valeurs de clé recontrôlées sur les paires d'époque), (3) mesure lui-même les taux
  avec son propre script sur une **copie figée** de la clé. Seul le verdict du vérificateur fait d'une lecture un résultat.

Chaque agent travaille par sessions courtes, avec un journal et des fichiers horodatés ; les clés sont **figées** (empreinte SHA + heure) avant
chaque test de généralisation.

## 2. Transcription

- Transcription sur les images en pleine résolution (Gallica IIIF, PARES, HCPortal) ; aucune image n'est redistribuée.
- Conventions communes (détails dans chaque `chiffre.txt`) : `[texte]` = clair dans la lettre ; `?` = lecture douteuse (alternative après `/`) ;
  `#` = groupe caché ou perdu (reliure, pli, déchirure), compté **non compris** ; `{…}` = majuscule / signe spécial / forme barrée selon le corpus ;
  `<n>` = code de nomenclateur.
- Le vérificateur compare sa transcription aveugle à celle du casseur ; les écarts sont tranchés au zoom et consignés.

## 3. Mesure sévère (taux par groupe et par mot)

Un **groupe** = une unité du chiffré (nombre, signe, syllabe chiffrée, code). Est compté **compris** un groupe dont la valeur est établie par la clé
et qui s'insère dans un mot compris. Est compté **non compris** :

- tout code de nomenclateur non résolu ou résolu sur un seul contexte (hypothèse, « HYP ») ;
- tout signe que la clé laisse à **deux valeurs**, même si le sens tranche ; toute valeur contredite par une clé d'époque ;
- tout groupe d'un mot opaque, toute faute du chiffreur ou du copiste, tout groupe caché dans la reliure ;
- les signes de ponctuation ou de passage lorsque leur statut n'est pas prouvé.

Le **taux par mot** (mots entièrement compris / mots) est toujours donné à côté du taux par groupe. Critère d'acceptation du projet :
**≥ 80 % par groupe** ; une **réserve** est posée si le taux par mot est < 80 % ou si la variante pessimiste passe sous 80 %.
Des variantes (« pessimiste », « très dur », « clé publiée seule ») sont données dans les dossiers pour montrer la sensibilité aux conventions.

## 4. Établir la clé

Quatre situations, signalées dans le tableau :

1. **Clé cassée à l'aveugle (C)** : solveur (recuit simulé homophone ou monoalphabétique, modèle de langue d'époque), sans valeur imposée ;
   contrôles : distance d'unicité (Shannon), reproduction avec d'autres graines, test contre des clés nulles, **généralisation** à des lettres jamais vues du solveur.
2. **Clé reconstruite depuis des paires d'époque (R)** : dans le même fonds, des lettres chiffrées portent leur déchiffrement d'époque (interligné ou « descifrado »
   joint) ; la clé est reconstruite sur ces paires, **figée**, puis appliquée à une lettre **sans** déchiffrement d'époque, ouverte seulement après le gel.
   Le vérificateur recontrôle un échantillon de valeurs sur les paires (valeur par valeur).
3. **Clé d'époque retrouvée (E)** ou **donnée par le déchiffreur (D)** : la clé est identifiée dans un autre volume ou dans une note d'époque.
4. **Clé publiée par un tiers (P)** : première lecture d'une lettre jamais lue avec une clé reconstruite et publiée par d'autres (S. Tomokiyo, J.-P. Devos…).
   Nous signalons nos **compléments et corrections** (valeurs absentes ou erronées), prouvés sur au moins deux contextes ou sur une glose d'époque.
   Le mérite de la clé revient à son auteur ; nous ne redistribuons pas sa table.

## 5. Étendue et nouveauté

- Une lettre n'est comptée que si elle est **entière** : ouverture et fin (date, signature, contreseing, adresse) vues sur l'image.
- La nouveauté est jugée **selon le clair** : A = aucun clair connu trouvé ; B = clair partiel connu (citation, fragment, résumé) ; C = texte déjà connu.
  « Non trouvé » ≠ « inédit » : les minutes en clair peuvent exister dans des archives non numérisées.

## 6. Limites connues

- Les agents peuvent surestimer leurs résultats : c'est la raison d'être du vérificateur et de la mesure sévère ; les taux du casseur ne sont jamais retenus.
- Les vérificateurs n'étaient pas toujours totalement aveugles au sens (contamination déclarée dans chaque dossier).
- Aucune relecture par un paléographe ou un historien spécialiste n'a encore été faite.
