# Construire le projet

Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de donner chemin vers le repertoire data avec l'application `bibliotheque -d <chemin verrs data>`

# Nom et prénom.
Tang Quoc Khang

# Les fonctionnalités que vous avez choisi d’implémenter.
- Afficher le nom d’utilisateur plutôt que l’id dans l’affichage des livres.

- Tri des résultats par titre, auteur pour l’affichage (utilisation de la fonction de tri de la STL).

- Créez un fichier de journal de l’application. Ce fichier est conservé au fur et à mesure des sessions (créez le fichier s’il n’existe pas à la première exécution).

# Les réponses aux questions, un paragraphe par questions est suffisant. (une phrase est insuffisant.)

Question 1 : C++

Expliquez en détails une fonctionnalité / notion dans le code que ne nous avons pas ou peu vu en cours. Montrez ici l’exemple sorti du code du projet.

Reponse 1 : 




Question 2 : Options de développement possible

Proposez une solution plus adaptée pour la gestion de bibliothèque et faisant appel éventuellement à une technologie autre que le C++, et expliquez comment vous interfaceriez ça avec le C++. Quelle solution technologique utiliseriez vous ? Pensez au futur de cette bibliothèque à Alexandrie qui pourrait éventuellement contenir des millions de livres.

Reponse 2 : 