#include <stdio.h>
#define TAILLE 10 
int 
somme(int * T, int N) {
    int res = 0;
    for ( int i =0; i<N ; i++){
        res += T[i];
    }
    return res;
}
int 
main(){
    int T1[10];;
    int s ;
    for (int i=0; i<10; i++){ 
        T1[i] = i;
    }
s=somme(T1,10);
printf( "la somme des  nombres  jusqu ’a  9999  est %d\n",s);
return 0;
}
