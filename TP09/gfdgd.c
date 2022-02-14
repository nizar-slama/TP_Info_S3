#include <stdio.h>
#include <stdlib.h>
#include <time.h>     
#include <ctype.h>  
#include "include/stack.h"

#define FERME 0
#define OUVERT 1

#define LIGNES 5
#define COLONNES 6

void affiche_laby(int* laby){
    for (int i=0; i<LIGNES; i++){
        for (int j=0; j<COLONNES; j++){
            switch((int) *(laby+(i*LIGNES)+j)){ 
                case FERME: //FERME
                    printf("X");
                    break;
                case OUVERT: //OUVERT
                    printf("Y");
                    break;
            }
        }
        printf("\n");
    }
}

void creation_laby(int* laby){
    for (int i=0; i<LIGNES; i++){
        for (int j=0; j<COLONNES; j++){
            if ((rand()%10 <= 4) || (i==0 && j ==1) || ((i==1 && j ==1))){
                  *(laby +(i*LIGNES)+j) = OUVERT;
            }
			else {
                *(laby +(i*LIGNES)+j) = FERME;
            }
			// fermer les contours
            if((i==0 && j!=1) || (j==0) || (j==COLONNES-1)){
                *(laby +(i*LIGNES)+j) = FERME;
            }

    }
}
