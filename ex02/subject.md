# Et dieu crea le DOM

Cette serie de questions/exercices aborde plusieurs sujets clefs de la programmation web:

- La trinite ( HTML, CSS, Javascript)
- Console navigateur

<ins>Rappel:</ins> Chercher sur internet des reponses a ses questions n'est pas de la triche, au contraire c'est une solution comme une autre

Dans cet exercice tu n'auras besoin que de modifier un seul fichier:

- `index.html`

Cependant libre a toi de te balader ou tu le souhaites

Ici tu vas bidouiller une page `HTML`.<br/>
Si une page web etait un humain alors
l'`HTML` serait le squellette, la base du corps<br/>
Le CSS quant a lui serait la peau, les cheveux, les vetements.. d'une certaines facon l'esthetique du corps<br/>
Le javascript serait les muscles qui permet au corps de bouger

## Consignes:

1. Ouvrir une console dans visual studio code grace au racourci clavier **CTRL + \`** ou via l'onget Terminal -> ouvrir un nouveau terminal.
2. Rentrer la commande `yarn`, attends la fin de l'execution de la commande, en principe max une minute.
3. Rentrer la commande `yarn watch`, une page/onglet chrome devrait s'ouvrir.
4. Ouvre le fichier `index.html` dans visual studio code.<br/> Tente au possible de comparer la page web que tu vois dans le navigateur avec le fichier `index.html`.<br/>
   Le fichier `index.html` contient une page `HTML`<br/>
   L'html se decoupe en un ensemble de _balise_ comme la balise `<button> </button>` qui permet d'afficher un boutton sur la page.

5. Touchons un peu au css, dans le fichier `index.html` trouve un moyen de modifier la couleur du **background** du boutton `click me !`
   Retourne sur la page web, la couleur du boutton a t-elle changee ?<br/>Bravo tu viens de modifier l'effet de style css applique au boutton<br/>
6. Tu as surement deja appuyer sur le boutton au centre de la page, si ce n'est pas le cas do it !<br/>
   Une petite fenetre apparaît sur ton ecran, c'est du a l'utilisation de la fonction `alert`<br/>
   Modifie le texte affiche par `alert`<br/>
   Tu viens de modifier du code `javascript`, un langage de programmation web
7. Enfin tente de dupliquer le boutton, en copiant par exemple la balise `button` deja presente sur la page
   Si tu vois deux bouttons sur la page web alors bravo tu viens de modifier le squelette html.

Bonus:

1. Sur la page web dans l'onglet `http://localhost:3000/`, appuie sur le clic droit de ta souris et clique sur `inspecter l'element`.<br/> Tu viens d'ouvrir la console de ton navigateur. Tout comme la console de ton ordinateur que tu utilises depuis un petit moment, cette console te permet de voir ce qui se passe "sous" l'interface graphique.
2. Fais un lien entre le fichier `index.html` et le contenu de la console du navigateur

<details> 
  <summary>Indice Etape 4 </summary>
   La page que tu vois est le rendu du fichier <code>index.html</code><br/>
   Regarde tu peux trouver sur la page et dans le fichier la phrase <code>click me !</code>
</details>

<details> 
  <summary>Indice Etape 5 </summary>
     la ligne 21 du fichier <code>index.html</code> devrait t'interesser
</details>

<details> 
  <summary>Indice Bonus Etape 2 </summary>
     La page html a ete chargee dans le navigateur, il prend le fichier et l'interprete pour le rendre utilisable par nimporte qui ( non developpeur ).<br/>
     Dans la console du navigateur tu peux voir plus ou moins exactement ton fichier index.html
     Tu peux meme le modifier ( pour la session en cours seulement )
</details>

### Conclusion:

Tu as en principe modifie les trois outils qui composent une page web.
L'html le css et la javascript.
