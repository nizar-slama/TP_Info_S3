 
#include <stdlib.h>
void AfficheMatrice ( float ∗∗M , int n , int m ) {

for ( int i = 0 ; i < 2 ; i++ ) {
printf ("( ") ;
for ( int j = 0 ; j < 2 ; j++ ) {
printf ( "%5.2f", M[ i ] [ j ] ) ;
}
printf ( ")\n" ) ;
}
}
#ifdef TESTS
#include <stdio.h>
#include " matrices.h"
int main () {
f l o a t ∗∗M = CreerMatrice ( 2 , 2 ) ;
M[ 0 ] [ 0 ] = 1 ;
M[ 0 ] [ 1 ] = 2 ;
M[ 1 ] [ 0 ] = 3 ;
2
M[ 1 ] [ 1 ] = 4 ;
AfficheMatrice ( M , 2 , 2 ) ;
return 0 ;
}
#endif
