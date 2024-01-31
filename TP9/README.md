# Découper une phrase en mots

Écrire une fonction `int split(char *msg, char *words[])` qui
découpe la chaîne `msg` en mots qui seront copiés dans le
tableau de chaîne `words`, la fonction renvoiant le nombre
de mots identifiés.

Dans un premier temps on suppose que `msg` est constitués
d'une suite de mots séparés par un seul espace, on traitera
la question d'espaces multiples ensuite.

Pour tester la fonction faites en sorte que votre programme
`split` passe son premier argument à la fonction split et
affiche le résultat :

~~~~Bash
$ ./split "to be or not to be"
6 mots :
to
be
or
not
to
be
$
~~~~
        