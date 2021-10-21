DEST= ~/Informatique/S3/bin
INCLUDE= -I ~/Informatique/S3/include
OPTIONS= -Wall -ggdb3 -Werror -Wextra
TESTS= -DTESTS -DUSECOLORS 
MODULE = nouvelle_fraction.o numdem.o 

%.o: %.c
	gcc $(INCLUDE) $(OPTIONS) -c $*.c 

$(DEST)/%: %.c
	gcc $(INCLUDE) $(OPTIONS) -o  $(DEST)/$* $(TESTS) $*.c $(MODULE)
	
run/%: $(DEST)/% 
	$(DEST)/$*


	
