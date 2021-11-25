#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "entree.h"


void liredecimal (float * n){
    int lu;
    int nbr;
    do{
        printf("donnez un nbr decimal");
        lu=scanf("%f",n);
        nbr=lirefindeligne();
    }while ((lu!=1)||(nbr>0));

}

#ifdef TESTS
#include "tests.h"

int main() {
    float n ;
    liredecimal(&n);
    test(n == 5.0f );
    return 0 ;
}
#endif
    
