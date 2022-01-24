#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

enum valeur {SEPT=7, HUIT=8, NEUF=9, DIX=10, VALET=11, DAME=12, ROI=13, AS=14};
enum couleur {TREFLE, CARREAU, PIQUE, COEUR};


typedef struct carte {
    enum valeur v;
    enum couleur c;
} Carte;


void initjeu(Carte jeu[]){
    int carte =0;
    int i;
    int j;
    for (i=SEPT;i<=AS;i++){
        jeu[carte].v = i;
        for (j=TREFLE; j<=COEUR; j++){
        jeu[carte].c=j;
    carte ++;
    }
}
}
    
char * toCouleur(int c){
    char* valeur=malloc(10);
    switch(c){
        case CARREAU:
            strcpy(valeur,"CARREAU");
            break;
        case TREFLE:
            strcpy(valeur,"TREFLE");
            break;
        case PIQUE:
            strcpy(valeur, "PIQUE");
            break;
        case COEUR :
            strcpy(valeur,"COEUR");
            break;
        default:
            strcpy(valeur,"UNDEFINED");
            break;
}
    return valeur;
}


char * toValeur(int v){
    char* valeur=malloc(10);
    switch(v){
        case SEPT:
            strcpy(valeur,"SEPT");
            break;
        case HUIT:
            strcpy(valeur,"HUIT");
            break;
        case NEUF:
            strcpy(valeur,"NEUF");
            break;
        case DIX:
            strcpy(valeur,"DIX");
            break;
        case VALET:
            strcpy(valeur,"VALET");
            break;
        case DAME:
            strcpy(valeur,"DAME");
            break;
        case ROI:
            strcpy(valeur,"ROI");
            break;
        case AS:
            strcpy(valeur,"AS");
            break;
        default:
            strcpy(valeur,"UNDEFINED");
            break;
}
    return valeur;
}


void affiche_carte(Carte X) 
{
    printf("%s\n, %s\n", toValeur(X.v), toCouleur(X.c));
}

 int alea32() {
	 return(rand() % 32);
}



void permute(Carte *carte1, Carte *carte2) {
    Carte variable;
    
    variable.v = (*carte1).v;
    variable.c = (*carte1).c;

    (*carte1).v = (*carte2).v;
    (*carte1).c = (*carte2).c;
    
    variable.v = (*carte2).v;
    variable.c = (*carte2).c;
    
}
    
    
void melange(Carte jeu[]){
    int i;
    for (i=0; i<50; i++){
        permute(&jeu[alea32()],&jeu[alea32()]);
    }
}


void affiche_jeucarte(Carte jeu[], int N){
    int i;

    for(i=0; i<N; i++){
        affiche_carte(jeu[i]);
    }
}

void distribue(Carte jeu[], Carte jeu1[], carte jeu2[]){
    int i;
    for (i=0; i<16 ; i++){
        jeu1[1] = jeu[2*i + 1 ];
    }
}









    
