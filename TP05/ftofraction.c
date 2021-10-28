#include <math.h>
#include "fraction.h"

struct fraction.h *
ftofraction (double x, double eps){
    struct fraction 
        * haut = nouvelle_fraction(1,0);
        * bas = nouvelle_fraction(0,1);
        * milieu;
        double val_milieu ;
        while (1){
            milieu= addition_cancre(bas, haut);
            val_milieu = eval_fraction( milieu);
            if fabsl(val_milieu-x)<eps){
                break;
            }
            if (val_milieu <x){
                bas = milieu;
            }
            else{
                haut= milieu;
            }
        }
        return milieu;
}
                
