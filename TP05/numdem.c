#include "fraction.h"

int *
numerateur ( struct fraction_s *x){
    return & (*x).p;
}
int *
denominateur (struct fraction_s* x){
    return & (*x).q;
}
#ifdef TESTS
#include "tests.h"

int main (){
    struct fraction_s *f = nouvelle_fraction(2,3);
    TEST_RES(*numerateur(f)==2);
    return 0;
}

#endif 
