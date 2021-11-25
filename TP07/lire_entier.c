#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


void lire_entier (int * n){
    int res_scanf,
    non_blancs;
    
do {
    printf("donner un decimal :")
    res_scanf= scanf("%d", n);
    non_blancs=lirefindeligne();
}
while (res_scanf==0)||non_blancs>0))
}

#ifdef TESTS
#include <test.h>
int main(){
    int n;
    lire_entier(&n);
    test(n==5);
    return 0;
}
#endinf
