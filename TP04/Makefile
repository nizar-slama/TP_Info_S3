
<<<<<<< HEAD
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

~/Informatique/S3/include/fraction: fraction.h 
gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra fraction.h 

=======
~/Informatique/S3/bin/CreerMatrice: CreerMatrice.c AfficherMatrice.o
gcc −I ~/ Informatique /S3/include −ggdb3 −Wall −DTESTS\
−Werror −Wextra CreerMatrice.c −o ~/Informatique/S3/bin/CreerMatrice

run/CreerMatrice.c: ~/Informatique/S3/bin/CreerMatrice.c
~/Informatique/S3/bin/CreerMatrice

CreerMatrice.o: CreerMatrice.c
gcc −I ~/ Informatique /S3/include −ggdb3 −Wall −DTESTS\
−Werror −Wextra -c CreerMatrice.c

~/Informatique/S3/bin/AfficherMatrice: CreerMatrice.c AfficherMatrice.o
gcc −I ~/ Informatique /S3/include −ggdb3 −Wall −DTESTS\
−Werror −Wextra CreerMatrice.c AfficherMatrice.o −o ~/Informatique/S3/bin/AfficherMatrice

run/AfficherMatrice: ~/Informatique/S3/bin/CreerMatrice.c
~/Informatique/S3/bin/AfficherMatrice

AfficherMatrice.o: CreerMatrice.c
gcc −I ~/ Informatique /S3/include −ggdb3 −Wall −DTESTS\
−Werror −Wextra -c AfficherMatrice.c
>>>>>>> 1d0f4440a362043410f3676a00d9e8e4348b5ef0
