# To binary or not to binary, that is the question ?

Cette série de questions/exercices aborde plusieurs sujets clefs de la programmation:

- Langage dit bas et haut niveau
- La compilation
- Le langage le plus bas niveau, le binaire
- Langage de programmation C

<ins>Rappel:</ins> Chercher sur internet des réponses a ses questions n'est pas de la triche, au contraire c'est une solution comme une autre

Liste des fichiers presents:

- `main.c` ( fichier contenant des lignes de code C, C étant un langage de programmation, d'ou l'extension `.c` a la fin du nom du fichier )
- `sujet.md`

Dans le fichier `main.c` se trouve un programme tres connu appelle `Hello World !`</br>
Ce type de programme a pour but d'afficher dans la console la phrase `Hello World !`

## Consignes:

1. Ouvrir une console dans visual studio code grace au raccourci clavier `CTRL` et <code>\`</code> ou via l'onglet `Terminal` -> `ouvrir un nouveau terminal` ( relis le fichier `README.md` a la racine du projet si tu as un problème )
2. Utiliser la commande qui permet de changer de repertoire pour aller dans le dossier `ex01`
3. Ouvrir le fichier `main.c` avec visual studio code via l'explorateur de fichier visual studio code
4. Utiliser la commande <a target="_blank" href="http://manpagesfr.free.fr/man/man1/cat.1.html">cat</a> pour afficher le contenu du fichier `main.c` dans la console
5. Le résultat te surprend t-il ?
6. Trouver un moyen de **compiler** le fichier `main.c` grace a `gcc` ( <a target="_blank" href="https://gcc.gnu.org/">GNU Compiler Collection</a>)
7. Apres compilation combien de fichier se trouve dans le dossier `ex01` ?
8. Trouver un moyen d'**executer** le fichier `a.out`
9. Que se passe t-il ?
10. Utiliser la commande <a target="_blank" href="http://manpagesfr.free.fr/man/man1/cat.1.html">cat</a> pour afficher le contenu du fichier `a.out` dans la console.
11. Qu'en penses tu ? Arrives tu a lire quelque chose ?
12. Et oui le compilateur a transformer le fichier en langage C `main.c` en fichier binaire<br/> Illustration <a target="_blank" href="https://yard.onl/sitelycee/cours/c/lib/NouvelElement105.jpg">ici</a><br/>
13. Qu'est ce que le binaire, dans les grandes lignes ?

Bonus:

1. Modifier dans le fichier `main.c` la phrase `Hello World !`. N'oublie pas de sauvegarder le fichier avec `CTRL` et `s`
2. Refaire les étapes de 2 a 4, le texte afficher par l'etape 4 a t-il change ?
3. A quoi sert la fonction `printf` ?

<details> 
  <summary>Indice Etape 1 </summary>
   Pour afficher le contenu du fichier sujet.md dans la sortie standard, il faudra rentrer dans la console a la racine du dossier ex00/ la commande suivante : <code> cat sujet.md </code>
</details>

<details> 
  <summary>Indice Etape 6 a 8 </summary>
    <a href="https://www.youtube.com/watch?v=M04I-RPhYwQ" target="_blank">Video tutoriel</a>
</details>

### Conclusion:

Dans un premier temps le fichier est fait pour être comprehensible par un humain, le compilateur lui le rend lisible pour la machine en le compilant en binaire un langage des plus proche de la machine. Ce qui lui permet de l'executer.<br/>
Quand tu télécharges un jeu video, tu télécharges un ensemble de fichier binaire deja compiles, que seul la machine peut comprendre.<br/>
Si ce n'était pas le cas le code serait lisible par un humain et le jeu s'exposerait a de gros problèmes de sécurité et d'abus <br/>
