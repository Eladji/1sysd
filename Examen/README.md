# Examen 1SYSD 

Livrable : le répertoire `Examen` de VÔTRE dépôt GIT public. 
(n'oubliez pas d'exécuter `git add` sur vos fichiers (pas les binaires !),
`git commit -a -m "..."` et `git push` avant de quitter la salle !

Ce répertoire contiendra un `Makefile` lançant la compilation de
tous les programmes que vous aurez fournis.

## Systèmes métrique et impérial

Source à fournir : `convert.c`

Un petit nombre de pays (en particulier les U.S.A.) n'utilisent pas le
système métrique (mètres, grammes, etc.) dans la vie courante mais
le système dit _impérial_ autrefois courant au Royaume Uni et encore
souvent utilisé en informatique (tailles des disquettes, disques,
aies, etc.)

Écrire une fonction `inches2cm` qui convertit une longueur en _inches_
(i.e. "pouces") en centimètre (1 pouce = 2,54cm) et la fonction
inverse `cm2inches`. Les valeurs seront de type `float` ou `double`.

Dans le programme principal demander à l'utilisateur s'il souhaite
convertir de pouces à cm (saisie du caractère `1`) ou l'inverse 
(saisie du caractère `2`), puis demande la saisie d'un nombre et
affiche le résultat de la conversion avec une précision de deux
chiffres après le point décimal.

## Compter des chiffres

Source à fournir : `nchiffres.c`

Écrire une fonction `int n_chiffres(char *s)` qui compte le nombre
de chiffres (en base 10) présent dans une chaîne de caractère.

Utiliser cette fonction dans un programme qui indique combien de
chiffres sont présents dans une chaîne passée en argument au 
programme lors de son exécution :

~~~~Bash
$ ./nchiffres "Ici 42 et 54 puis 1"
5
$ ./nchiffres "to be or not to be"
0
~~~~

## Suppression de doublons (et plus)

Source à fournir : `testtab1.c`

Écrire une fonction `void display_tab(int tab[], int size)`
qui affiche sur une ligne, séparée par un espace, les valeurs
entières stockées dans un tableau de taille `size`.

Écrire une fonction `int nb_uniq(int tab[], int size, int newtab[])` qui  
prend en paramètres un tableau d'entiers et sa taille et
copie les valeurs dans newtab en y supprimant les doublons consécutifs
(même valeur répétée à la suite) et renvoie le nombre d'éléments du tableau
résultat.

La fonction pourra être testée ainsi :

~~~~C

void display_tab(int tab[], int size) {
    // ici votre code
    // ...
}

int nb_uniq(int tab[], int size) {
    // ici votre code
    // ...
}

int main() {
    int t1[] = { 1, 2, 5, 7, 10 }; // pas de doublons
    int t2[] = { 1, 1, 4, 5, 42, 42, 42, 4, 5, 42 }; // doublons : 1, 1 et 42, 42, 42 
    int new_t1[50], new_t2[50]; // taille maxi 50 pour le résultat.
    int new_size;

    new_size = nb_uniq(t1, 5, new_t1);
    display_tab(new_t1, new_size); // normalement inchangé
    new_size = nb_uniq(t2, 10, new_t2);
    display_tab(new_t2, new_size); // 1 4 5 42 4 5 42
}
~~~~

## Indifférent à la casse

Source à fournir : `nocase_cmp.c`

Écrire un programme qui compare deux chaînes reçues en argument et,
par le biais d'une fonction à écrire `int nocase_equal(char *s1, char *s2)` 
indique si elle sont identiques indépendamment de la différence
majuscule/minuscules :

_Note_ : n'utilisez AUCUNE fonction de la bibliothèque C traitant
des chaînes de caractères (i.e. pas de `string.h` !)

~~~~C
$ ./nocase_cmp "bonJouR" "BonjOUr"
identiques
$ ./nocase_cmp "Bonjour" "Bonsoir"
différentes
$ ./nocase_cmp "Hello" "Hello Goodbye"
différentes
$ ./nocase_cmp "Bonjour" "Bonjour"
identiques
$ ./nocase_cmp "bonJouR" "BonjOUr"
identiques
~~~~

## Des listes et des tables

Source à fournir dans `intlist.c`

Prenez le fichier `intlist.c` comme point de départ.

Vous pourrez aussi reprendre la fonction `display_tab` d'une
question précédente.

Écrivez une fonction `node *tab2list(int tab[], int size)` 
qui renvoie une liste chaînée contenant les éléments du
tableau d'entiers de taille `size`.

Écrivez une fonction `int list2tab(node *head, int tab[])` qui 
remplit le tableau d'entiers `tab` avec les éléments de la liste
chaînée pointée par `head` et renvoie la taille du tableau.

Testez ces fonctions en réalisant les deux types de conversions
sur et en affichant les tableaux et listes utilisées.
