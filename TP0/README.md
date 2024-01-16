# TP0 : se faire la main avec GIT et make

Commencez par mettre à jour votre copie de mon dépôt puis
retournez dans le vôtre :

~~~~Bash
$ cd ~/1sysd23-b1b
$ git pull
$ ls
... TP0 ...
$ cd ~/1sysd
~~~~

Créez un répertoire TP0 et mettez y les fichiers `Makefile` et
`hello.c` :

~~~~Bash
$ pwd
/home/.../1sysd
$ mkdir TP0
$ git mv hello.c TP0/
$ git mv Makefile TP0/
$ cd TP0
$ make
$ ./hello
Bonjour le monde !
~~~~

Récupérez mon modèle de Makefile et adaptez-le au TP :

~~~~Bash
$ cp ~/1sysd23-b1b/TP0/Makefile .
$ nano Makefile 
(ou vi, vim, gedit, etc.)
~~~~

ajoutez `hello` après `PROGS=` et sauvegardez, le fichier
sera donc :

~~~~Makefile
.PHONY: all clean

PROGS=hello
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< 

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.o
~~~~

Vérifiez que tout fonctionne :

~~~~Bash
$ make clean
$ make
$ ./hello
~~~~

Créez un fichier `hello2.c` qui affiche un message différent,
ajoutez le au dépôt, ajoutez `hello2` à la ligne `PROGS=...` :

~~~~Makefile
PROGS=hello hello2
~~~~

~~~~Bash
$ make
$ ./hello2
...
$ git add hello2.c
$ git commit -a -m "hello2 ajouté"
$ git push
~~~~

Vérifiez sur gitlab.com que le répertoire TP0 contient bien
`hello.c`, `hello2.c`, `Makefile` (et RIEN d'autre) et qu'ils
sont bien à jour.

On reprendra ce Makefile de TP en TP en adaptant la ligne
progs.

Référénce : 

_Le C en 20 heures_ : https://archives.framabook.org/le-c-en-20-heures-2/index.html

