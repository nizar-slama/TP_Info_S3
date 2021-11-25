#commande de compilation 

CC=gcc 

#options de compilation 

CFLAGS=  -Wextra -Wall -pedantic 

#options d'édition de liens : librairies utilisées 

LDFLAGS=  -lm -lentrees 

#emplacement des .a (librairies) du TP 

LIB= -L ~/Informatique/S3/lib/

# emplacement des .h du TP 

INC= ../../include 

# permet d'exécuter en mode debug (génère les informations nécessaires au debugger) 

ifeq ($(DEBUG),yes) 

    CFLAGS += -g 

endif 

EXEC= libentrees.a 

SRC=entrees.c  

OBJ= $(SRC:.c=.o) 

all : $(EXEC) 

~/Informatique/S3/lib/libentrees.a : lirefindeligne.o lireentier.o liredecimal.o# indique la dépendance de fichiers pour produire la lib (commenter si pb) 
	ar rcs ~/Informatique/S3/lib/libentrees.a lirefindeligne.o lireentier.o liredecimal.o
	ranlib ~/Informatique/S3/lib/libentrees.a         



%.o: %.c 
	@$(CC) -o $@ -c $< $(CFLAGS) -I $(INC)

clean: 
	rm $(LIB)/libentrees.a  *.o          # permet d'automatiser le "nettoyage"

~/Informatique/S3/bin/%: %.c ~/Informatique/S3/lib/libentrees.a
	gcc $< -o $@ -DTESTS -DUSECOLORS -L ~/Informatique/S3/lib/ -lentrees -I $(INC)

test/lirefindeligne: ~/Informatique/S3/bin/lirefindeligne
	printf "51 a  bc\n az" |~/Informatique/S3/bin/lirefindeligne

test/lireentier: ~/Informatique/S3/bin/lireentier
	printf "51 a\n abc\n 1.3\n 5\n" |~/Informatique/S3/bin/lireentier

test/liredecimal: ~/Informatique/S3/bin/liredecimal
	printf "51 a\n abc\n 8.0 b\n 5.0\n" |~/Informatique/S3/bin/liredecimal
	
test:  test/lirefindeligne test/lireentier test/liredecimal
