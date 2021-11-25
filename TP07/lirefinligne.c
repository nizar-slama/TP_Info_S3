
#include <stdio.h>
#include <ctype.h>
#include "entree.h"

int lirefindeligne(){
    int count =0;
    char car;
    car = getchar(); //consomme un caractere de du buffer
    while ((car != EOF) && (car != '\n')){
        if (!isspace(car)){
            count ++; //pas un espace
        }
        car=getchar();
    }
    return count;
}

#ifdef TESTS
#include "tests.h"

int main() {
    int n ;
    n=lirefindeligne();
    test(n == 5 );
    return 0 ;
}
#endif
