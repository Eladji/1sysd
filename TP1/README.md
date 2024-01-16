# Ok Boomer !

Créer un programme C qui demande son âge à l'utilisateur et
affiche _Ok Boomer!_ s'il a plus de 42 ans et _Time to learn UNIX_
sinon...

On commence par créer le répertoire `TP1` à la base de notre
dépot et on y met le Makefile du TP0 :

~~~~Bash
$ cd ~/1sysd
$ pwd
/home/.../1sysd
$ mkdir TP1
$ cd TP1
$ cp ../TP0/Makefile .
$ git add Makefile
$ nano Makefile
(ou vim, vi, gedit, ..., mettre PROGS=boomer)
$ nano boomer.c
(ou vim, vi, gedit, ..., coder...)
$ make
$ ./boomer
$ git add boomer.c
$ git commit -a -m "exo fini"
$ git push
~~~~

# Tirer un nombre au hasard

Indice : il existe dans la bibliothèque C une fonction
`rand` qui renvoie un nombre "pseudo-aléatoire" entre
0 et RAND_MAX :

~~~~C
#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;

    printf("RAND_MAX = %d\n", RAND_MAX);
    n = rand();
    printf("Tirage : %d\n", n);
}
~~~~
