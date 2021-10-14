<<<<<<< HEAD
#include <stdlib.h>

float**
CreerMatrice(int n, int m){
    float **res;
res=malloc(n*sizeof(float*)) ;
for (int i=0; i<n; i++){
    res[i]=malloc(m*sizeof(float));
}
return res;
}

 
#include <stdio.h>
 int main() {
     float **M= CreerMatrice(2,2);
     M[0][0]=1;
     M[0][1]=2;
     M[1][0]=3;
    M[1][1]=4;
     for (int i=0; i<2; i++){
         printf("( ");
         for ( int j=0 ; j<2 ; j++){
             printf(  " %5.2f  " , M[i] [j]  );
         }
         printf (")\n" );
     }
     return 0 ;
 }
=======
#include<stdlib.h>

float ** 
CreerMatrice(int n, int m){
    float(** fonction);
    fonction=malloc(n*sizeof(float*));
    for (int i=0;i<n;i++){
        fonction[i]=malloc(m*sizeof(float));
    }
    return (fonction);

    
#ifdef TESTS

#include <stdio.h>
int main () {
float ∗∗M = CreerMatrice ( 2 , 2 ) ;
M[ 0 ] [ 0 ] = 1 ;
M[ 0 ] [ 1 ] = 2 ;
M[ 1 ] [ 0 ] = 3 ;
M[ 1 ] [ 1 ] = 4 ;
for ( int i = 0 ; i < 2 ; i++ ) {
printf ("( ") ;
for ( int j = 0 ; j < 2 ; j++ ) {
printf ( "%5.2f", M[ i ] [ j ] ) ;
}
printf ( ")\n" ) ;
}

return 0 ;
}
#endif
>>>>>>> 1d0f4440a362043410f3676a00d9e8e4348b5ef0
