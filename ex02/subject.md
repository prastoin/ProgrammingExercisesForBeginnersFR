# Une histoire de plan

Cette série de questions/exercices aborde plusieurs sujets:

- Bash background
- Bash foreground
- nohup
- Processus lifecyle

<ins>Rappel:</ins> Chercher sur internet des réponses à ses questions n'est pas de la triche, au contraire c'est une solution comme une autre

Liste des fichiers présents:

- `main.c` ( fichier contenant des lignes de code C, C étant un langage de programmation, d'où l'extension `.c` à la fin du nom du fichier )
- `subject.md`

Dans le fichier `main.c` se trouve un programme contenant une boucle infinie</br>
Le programme utiliser la fonction <a target="_blank" href="https://www.tutorialspoint.com/c_standard_library/c_function_fgets.htm">fgets</a>

## Consignes:

1. Ouvrir une console dans visual studio code grâce au raccourci clavier `CTRL` et <code>\`</code> ou via l'onglet `Terminal` -> `ouvrir un nouveau terminal`.
2. Utiliser la commande qui permet de changer de répertoire pour aller dans le dossier `ex02`
3. Trouver un flag de `gcc` qui permet de compiler le fichier `main.c` dans un fichier avec un nom défini, par exemple `rtfm.out`<br/>
   `gcc --help` est ton ami
4. Exécuter l'output une première fois sans operation ou commande supplémentaire, c'est à dire au premier plan<br/>
   Réussir à quitter le programme grâce à une saisie dans l'entrée standard ( voir `main.c` )
5. Exécuter l'output généré en utilisant la commande <a target="_blank" href="https://www.educative.io/edpresso/what-is-nohup-in-linux">nohup</a> et l'opérateur de commande <a target="_blank" href="https://stackoverflow.com/questions/13338870/what-does-at-the-end-of-a-linux-command-mean">&</a> <br/>
   <a target="_blank" href="https://stackoverflow.com/questions/15595374/whats-the-difference-between-nohup-and-ampersand">différence entre `nohup` et `&`</a>
6. Retrouver le programme en background en utilisant au moins une des commandes suivantes: `ps`, `top`, `jobs` et `htop`
7. Utiliser la commande `kill` pour terminer le programme en attente
8. De nouveau relancer le programme en utilisant la commande `nohup` et l'opérateur de commande `&`, attention à l'ordre.
9. A quoi sert la commande `fg`, utilise la sur le programme en background
10. Utiliser un raccourci clavier pour envoyer un signal `SIGINT` au programme revenu en foreground
11. Quel effet a eu le signal `SIGINT` sur le programme ?

<details> 
  <summary>Indice Etape 3</summary>
    <code>  -o                Place the output into FILE.</code>
</details>

<details> 
  <summary>Indice Etape 4</summary>
    Jette un oeil à <code>EXIT_INPUT</code>  
</details>

<details> 
  <summary>Indice Etape 6 et 7</summary>
  <a target="_blank" href="https://unix.stackexchange.com/questions/104821/how-to-terminate-a-background-process">Tout est là !</a>
</details>

### Conclusion:

<a target="_blank" href="https://hexadix.com/use-nohup-execute-commands-background-keep-running-exit-shell-promt/">Pourquoi tout ca ?</a><br/>
Mettre un programme en background avec `nohup` permet de continuer à l'éxécuter même après avoir quitter l'instance de la console. Utile lorsque tu souhaites lancer un processus chronophage sur un serveur distant via par exemple `ssh`. Tu te connectes au serveur lance ton programme en background et quitte l'instance ssh, le processus tournera alors toujours sur le serveur.
