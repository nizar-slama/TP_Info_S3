#include <stdio.h>

#define TAILLE 10000

void 
crible(int *t, int N) {
    t[0]=0 ;
    t[1]=0 ;
    for ( int i=2 ; i<N; i++){
        t[i]=i ;
    }
    for (int i=2; i<N; i++){
        if(t[i]==i){
            for (int j=2;i*j<N;j++){
                t[i*j]=i;
            }
        }
    }
    printf("%d\n",t[0]) ;
    printf("%d\n",t[1]) ;
    printf("%d\n",t[2]) ;
    printf("%d\n",t[1500]) ;
}
int 
main(){
    int tableau[TAILLE] ;
    crible ( & ( tableau[0] ) , TAILLE ) ;
    return 0 ;
}
