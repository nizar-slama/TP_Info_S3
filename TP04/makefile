
~/Informatique/S3/bin/CreerMatrice: CreerMatrice.c
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra CreerMatrice.c -DTESTS -o  ~/Informatique/S3/bin/CreerMatrice
	
run/CreerMatrice: ~/Informatique/S3/bin/CreerMatrice
	~/Informatique/S3/bin/CreerMatrice

CreerMatrice.o: CreerMatrice.c
	gcc -I ~/Informatique/S3/include -Wall -Werror -Wextra  -ggdb3 -c CreerMatrice.c
	
~/Informatique/S3/bin/AfficheMatrice: AfficheMatrice.c CreerMatrice.o
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra AfficheMatrice.c CreerMatrice.o -DTESTS -o  ~/Informatique/S3/bin/AfficheMatrice

run/AfficheMatrice: ~/Informatique/S3/bin/AfficheMatrice
	~/Informatique/S3/bin/AfficheMatrice

AfficheMatrice.o: AfficheMatrice.c
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra AfficheMatrice

~/Informatique/S3/bin/fraction: fraction.h 
gcc -I ~/Informatique/S3/include

