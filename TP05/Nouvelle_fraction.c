#include <stdlib.h>
#include "fraction.h"
struct fraction_s *
nouvelle_fraction(int a , int b){
    struct fraction_s *t;
    t=malloc(sizeof(struct fraction_s));
    if (b<a){
        a=-a;
        b=-b;
    }
    (*t).p=a;
    (*t).q=b;
    return t;
}
#ifdef TESTS
#include "tests.h"
int main(){
    struct fraction_s *f;
    f=nouvelle_fraction(1,2);
    VAL_INT(f->p) ;
    TEST_RES(f->q==2);
    return 0 ;
}
    
#endif
