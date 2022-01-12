# Aaaah mais en fait ca marche comme ca !

Cette série de questions/exercices aborde plusieurs sujets clefs:

- Premier pas sur Mac ou Linux
- Qu'est ce qu'une console ou un terminal
- Operations basiques, création de fichier de dossier etc, via l'interface graphique
- Operations basiques, création de fichier de dossier etc, via le terminal

## Welcome to Unix

En principe tu utilises un ordinateur basé sur <a target="_blank" href="https://fr.wikipedia.org/wiki/Unix">Unix</a>, probablement soit un `Mac` ( apple ) ou un `Linux` ( open source )

Pas de panique</br>
Il est normal que tu retrouves difficilement tes repères d'utilisateur window, ici est tout le but de l'exercice.

## Consignes

### 1) Interface graphique

1. Grâce à l'explorateur de fichier visual studio code, créer un nouveau dossier appelé `interfaceGraphiqueDossier` dans le dossier `ex00`
2. Dans ce dossier créer un fichier appelé `interfaceGraphiqueFichier`

### 2) Console

1. Se documenter sur ce qu'est une console aussi appelé terminal
2. Ouvrir une console dans visual studio code grâce au raccourci clavier `CTRL` et <code>\`</code> ou via l'onglet `Terminal` -> `ouvrir un nouveau terminal`.
3. Une console te permet de soumettre des commandes à ton ordinateur. Par exemple `ls` te permet de lister les fichiers du dossier dans lequel le terminal se situe actuellement<br/>
   Rentre dans le terminal la commande suivante `ls` et appuie sur entree
   Tu devrais voir dans la console les dossiers

- `ex00`
- `ex01` etc etc
  Et le fichier `README.md`

4. Chercher sur internet une commande qui permet de changer de dossier
   Utiliser cette commande pour se déplacer dans le dossier `ex00`
5. Rentrer la commande `ls`, tu devrais voir le fichier que tu lis actuellement `subject.md` et le dossier `interfaceGraphiqueDossier`. Si c'est le cas tu es donc bien dans le dossier `ex00`
6. Trouver des commandes pour créer un dossier nomme `interfaceTerminalDossier` et un fichier `interfaceTerminalFichier` dans le dossier que tu viens de créer directement via la console

Bonus: Permissions

1. Trouver un flag de `ls` qui permet d'afficher les permissions d'accès à un fichier
2. Trouver une commande qui permet de changer les permissions d'un fichier
3. Ajouter les droits `rwx` (read write execute) au fichier `interfaceTerminalFichier` pour le user propriétaire du fichier seulement

<details> 
  <summary>Indice Interface graphique Etape 2 </summary>
   Le clique droit est ton ami
</details>

<details> 
  <summary>Indice Console Etape 4 </summary>
    La commande que tu cherches s'appelle <code>cd</code><br/>
    Attention <code>cd</code> sans préciser un nom de dossier te ramènera à la racine de ta session !<br/> Si jamais tu fais l'erreur, rentre la commande <code>cd -</code> ce te permettra de revenir là où tu étais
    Exemple <code>cd nom_du_dossier</code>
</details>

<details> 
  <summary>Indice Etape 5 </summary>
    La commande <a href="http://manpagesfr.free.fr/man/man2/mkdir.2.html" target="_blank">mkdir</a><br/>
    La commande <a href="https://www.delftstack.com/fr/howto/linux/how-to-create-a-file-in-linux-terminal/" target="_blank">touch</a>
</details>

<details> 
  <summary>Bonus Indice Etape 2 </summary>
    La commande <a href="http://manpagesfr.free.fr/man/man1/chmod.1.html" target="_blank">chmod</a><br/>
</details>

### Conclusion

Comme tu as pu le voir il existe plusieurs manières pour un utilisateur de créer des fichiers et ou des dossiers<br/>
En réalité "sous" l'interface graphique des premieres étapes se déroule plus ou moins ce que tu as fais à la main dans les étapes de la console
