DEST= ~/Informatique/S3/bin
INCLUDE= -I ~/Informatique/S3/include
OPTIONS= -Wall -ggdb3 -Werror -Wextra
TESTS= -DTESTS -DUSECOLORS 
MODULE = nouvelle_fraction.o numdem.o fractioncmp.o
LIB = -L ~/Informatique/S3/lib -lm -lfraction 

LFRAC=

~/Informatique/S3/lib/libfraction.a : $(MODULES) ar rcs ~/Informatique/S3/lib/libfraction.a $(MODULES)

%.o: %.c
	gcc $(INCLUDE) $(OPTIONS) -c $*.c 

$(DEST)/%: %.c ~/Informatique/S3/lib/libfraction.a

	gcc $(OPTIONS) $(TESTS) $(INCLUDE)-o $(DEST)/$*.c
	
run/%: $(DEST)/% 
	$(DEST)/$*
	
$(PROGRAMME): $(PROGRAMME).c $(LFRAC)
	gcc $(OPTIONS) $(INCLUDE) -c $(PROGRAMME) $(PROGRAMME).c $(LIB)



	
