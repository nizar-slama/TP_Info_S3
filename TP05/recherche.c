#include "fraction.h"
#include <math.h>
struct fraction_s*
recherche (double x, double eps){
        struct fraction_s
        *min= nouvelle_fraction(0,1);
        *max= nouvelle_fraction(1,0);
        *somme
    while (1){
        somme=addition.cancre(min,max);
        double s=eval(somme)
        if( fabs(s-x)<eps)}
            return somme;
        if (s<x){
            min=somme;
        }
        else {
            max=somme;
        }
}
return somme;
}
