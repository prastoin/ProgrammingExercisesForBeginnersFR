# Aaaah mais en fait ca marche comme ca !

Cette série de questions/exercices aborde plusieurs sujets clefs:

- Premier pas sur Mac ou Linux
- Qu'est ce qu'une console ou un terminal
- Operations basiques, creation de fichier de dossier etc, via l'interface graphique
- Operations basiques, creation de fichier de dossier etc, via le terminal

## Welcome to Unix

En principe tu utilises un ordinateur base sur <a target="_blank" href="https://fr.wikipedia.org/wiki/Unix">Unix</a>, probablement soit un `Mac` ( apple ) ou un `Linux` ( open source )

Pas de panique</br>
Il est normal que tu retrouves difficilement tes repères d'utilisateur window, ici est tout le but de l'exercice.

## Consignes

### 1) Interface graphique

1. Grace a l'explorateur de fichier visual studio code, créer un nouveau dossier appelle `interfaceGraphiqueDossier` dans le dossier `ex00`
2. Dans ce dossier créer un fichier appelle `interfaceGraphiqueFichier`

### 2) Console

1. Se documenter sur ce qu'est une console aussi appelle terminal
1. Ouvrir une console dans visual studio code grace au raccourci clavier `CTRL` et <code>\`</code> ou via l'onglet `Terminal` -> `ouvrir un nouveau terminal`.
1. Une console te permet de soumettre des commandes a ton ordinateur. Par exemple `ls` te permet de lister les fichiers du dossier dans lequel le terminal se situe actuellement<br/>
   Rentre dans le terminal la commande suivante `ls` et appuie sur entree
   Tu devrais voir dans la console les dossiers

- `ex00`
- `ex01` etc etc
  Et le fichier `README.md`

3. Chercher sur internet une commande qui permet de changer de dossier
   Utiliser cette commande pour se déplacer dans le dossier `ex00`
4. Rentrer la commande `ls`, tu devrais voir le fichier que tu lis actuellement `subject.md` et le dossier `interfaceGraphiqueDossier`. Si c'est le cas tu es donc bien dans le dossier `ex00`
5. Trouver des commandes pour créer un dossier nomme `interfaceTerminalDossier` et un fichier `interfaceTerminalFichier` dans le dossier que tu viens de créer directement via la console

<details> 
  <summary>Indice Etape 2 </summary>
   Le clique droit est ton ami
</details>

<details> 
  <summary>Indice Etape 3 </summary>
    La commande que tu cherches s'appelle <code>cd</code><br/>
    Attention <code>cd</code> sans preciser un nom de dossier te ramènera a la racine de ta session !<br/>
    Exemple <code>cd nom_du_dossier</code>
</details>

<details> 
  <summary>Indice Etape 5 </summary>
    La commande <a target="_blank" href="http://manpagesfr.free.fr/man/man2/mkdir.2.html">mkdir</a><br/>
    La commande <a target="_blank" href="https://www.delftstack.com/fr/howto/linux/how-to-create-a-file-in-linux-terminal/">touch</a>
</details>

### Conclusion

Comme tu as pu le voir il existe plusieurs manières pour un utilisateur de créer des fichiers et ou des dossiers<br/>
En réalité "sous" l'interface graphique des premieres étapes se déroule plus ou moins ce que tu as fais a la main dans les étapes de la console
