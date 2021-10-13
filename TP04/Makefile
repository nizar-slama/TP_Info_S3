
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
