
CODING DOJO : Dilemme des prisonniers

Deux suspects sont interrogés à un interrogatoire, chacun de son côté. 
Chaque suspect à deux choix à chaque interrogatoire : Se Taire ou Dénoncer (les choix sont donc indépendants, car ils sont interrogés séparément)
Les points calculés à chaque interrogatoire sont :
Matrice des Paiements
1 \ 2
Le suspect no 2 se tait
Le suspect no 2 dénonce
Le suspect no 1 se tait
(-1 ; -1)
(-10 ; 0)
Le suspect no 1 dénonce
(0 ; -10)
(-5 ; -5)

On simule 6 interrogatoires : Chaque suspect à accès à l’historique de toutes les décisions passées (décisions prises par lui ou par l’autre suspect).
On veut connaitre le gain de chaque suspect : 
Pour ce faire on suppose les comportements suivants des suspects
Suspect 1 (stratégie imitation)
Suspect 2 (stratégie historique)
Premier choix au hasard.
Se taire au Premier choix.
Deuxième choix au hasard.
Choisir au hasard le au second tour
Le choix suivant est de faire le choix qu’à fait le suspect numéro 2 à l’interrogation 
qui vient juste de passer.
A partir du troisième tour, choisir le choix majoritaire dans l’historique du suspect 1. En cas d’égalité il fait le choix de se taire.


IMPLEMENTER LE JEU DANS LE LANGAGE DE VOTRE CHOIX.
DONNER UN RAPPORT RECAPITULATIF SUIVANT :

    • Choix de chaque suspect pour les confrontations
    • Points de chaque suspect pour les confrontations 
(avec les deux stratégies ci-dessus)
    • Désigner le gagnant ou renvoyer match nul en cas d’égalité
    • Faire plusieurs simulations
