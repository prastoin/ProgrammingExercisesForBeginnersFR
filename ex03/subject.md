# Et dieu créa le DOM

Cette série de questions/exercices aborde plusieurs sujets clefs de la programmation web:

- La trinité ( HTML, CSS, Javascript)
- Console navigateur
- iframe
- URL query

<ins>Rappel:</ins> Chercher sur internet des réponses à ses questions n'est pas de la triche, au contraire c'est une solution comme une autre

Dans cet exercice tu n'auras besoin que de modifier un seul fichier:

- `index.html`

Cependant libre à toi de te balader où tu le souhaites

Ici tu vas bidouiller une page `HTML`.<br/>
Si une page web était un humain alors
l'`HTML` serait le squelette, la base du corps<br/>
Le CSS quant à lui serait la peau, les cheveux, les vêtements.. d'une certaines façon l'esthétique du corps<br/>
Le javascript serait les muscles qui permettent au corps de bouger

## Consignes:

1. Ouvrir une console dans visual studio code grâce au raccourci clavier `CTRL` et <code>\`</code> ou via l'onglet `Terminal` -> `ouvrir un nouveau terminal`.
2. Utiliser la commande qui permet de changer de répertoire pour aller dans le dossier `ex03`
3. Rentrer la commande `yarn`, attends la fin de l'exécution de la commande, en principe max une minute.
4. Rentrer la commande `yarn watch`, une page/onglet chrome devrait s'ouvrir.
5. Ouvrir le fichier `index.html` dans visual studio code.<br/> Tente au possible de comparer la page web que tu vois dans le navigateur avec le fichier `index.html`.<br/>
   Le fichier `index.html` contient une page `HTML`<br/>
   L'html se découpe en un ensemble de _balise_ comme la balise `<button> </button>` qui permet d'afficher un bouton sur la page.

6. Touchons un peu au css, dans le fichier `index.html` trouve un moyen de modifier la couleur du **background** du bouton `click me !`<br/>
   N'oublie pas de sauvegarder le fichier pour appliquer tes modifications.
   Retourne sur la page web, la couleur du bouton a t-elle changée ?<br/>Bravo tu viens de modifier l'effet de style css appliqué au bouton<br/>
7. Tu as sûrement déjà appuyer sur le bouton au centre de la page, si ce n'est pas le cas do it !<br/>
   Une petite fenêtre apparaît sur ton écran, c'est dû à l'utilisation de la fonction `alert`<br/>
   Modifie le texte affiche par `alert`<br/>
   Tu viens de modifier du code `javascript`, un langage de programmation web
8. Enfin tente de dupliquer le bouton, en copiant par exemple la balise `button` déjà présente sur la page
   Si tu vois deux boutons sur la page web alors bravo tu viens de modifier le squelette html.
9. <a target="_blank" href="https://support.google.com/youtube/answer/171780?hl=fr">Intégrer</a> une vidéo youtube de ton choix sur la page web grâce à l'outil youtube `partager` -> `intégration`<br/>
   Copier coller le texte dans la page web et sauvegarder le fichier, un <a target="_blank" href="https://developer.mozilla.org/fr/docs/Web/HTML/Element/iframe">iframe</a> youtube s'affiche sur ta page, tu peux lancer la vidéo<br/>
10. Change l'ID de la vidéo rendu par l'iframe par l'ID suivant `dQw4w9WgXcQ`, regarde la propriété `src` de la balise `iframe`, la vidéo rendu par l'iframe a normalement changée
11. Ajoute une `query` `start` à l'url contenu dans la props `src` de l'iframe. <a target="_blank" href="https://www.semrush.com/blog/url-parameters/">Qu'est ce qu'une query dans un url</a>

Bonus:

1. Sur la page web dans l'onglet `http://localhost:3000/`, appuie sur le clic droit de ta souris et clique sur `inspecter l'element`.<br/> Tu viens d'ouvrir la console de ton navigateur. Tout comme la console de ton ordinateur que tu utilises depuis un petit moment, cette console te permet de voir ce qui se passe "sous" l'interface graphique.
2. Fais un lien entre le fichier `index.html` et le contenu de la console du navigateur

<details> 
  <summary>Indice Etape 5 </summary>
   La page que tu vois est le rendu du fichier <code>index.html</code><br/>
   Regarde tu peux trouver sur la page et dans le fichier la phrase <code>click me !</code>
</details>

<details> 
  <summary>Indice Etape 6 </summary>
     la ligne 21 du fichier <code>index.html</code> devrait t'intéresser
</details>

<details> 
  <summary>Indice Etape 7 </summary>
   Tu peux chercher un mot dans un fichier avec visual studio code grâce au raccourci <code>CTRL</code> et <code>f</code><br/>
</details>

<details> 
  <summary>Indice Etape 8 </summary>
   Tente de copier coller l'ensemble de la balise </code>button</code> déjà présent dans le fichier <code>index.html</code>
</details>

<details> 
  <summary>Indice Etape 11 </summary>
   Tu peux toujours essayer de cocher la case <code>Démarrer à</code> lorsque tu partages via intégration une vidéo youtube. Tu verras apparaître une url avec la query que tu cherches.
</details>

<details> 
  <summary>Indice Bonus Etape 2 </summary>
     La page html a été chargée dans le navigateur, il prend le fichier et l'interprète pour le rendre utilisable par n'importe qui ( non développeur ).<br/>
     Dans la console du navigateur tu peux voir plus ou moins exactement ton fichier index.html
     Tu peux meme le modifier ( pour la session en cours seulement )
</details>

### Conclusion:

Tu as en principe modifié les trois outils qui composent une page web.
L'html le css et la javascript.
