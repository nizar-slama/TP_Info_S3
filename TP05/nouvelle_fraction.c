#include <stdlib.h>
#include "fraction.h"
struct fraction_s *nouvelle_fraction(int a , int b){
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
int *
numerateur ( struct fraction_s *x){
    return & (*x).p;
}
int *
denominateur (struct fraction_s *x){
    return & (*x).q;
}




#ifdef TESTS
#include "tests.h"
int main(){
    struct fraction_s *f;
    f=nouvelle_fraction(1,2);
    VAL_INT(f->p) ;
    TEST_RES(f->q==2);
    return 0 ;
    
    
    struct fraction_s *f:
      f= nouvelle_fraction(2,3);
    VAL_INT(f->p);
    TEST_RES (f->p==2);
    VAL_INT(  f−>q );
    TEST_RES (  f−>q == 3);
    f = nouvelle_fraction( 2 ,−3 ) ;
    TEST_RES(  f−>p ==−2 );
    TEST_RES(  f−>q == 3 );
    f = nouvelle_fraction  ( 2,0);
    TEST_RES(f−>p == 1);
    TEST_RES( f−>q == 0 );
    f = nouvelle_fraction  (−3  ,0);
    TEST_RES( f−>p ==−1 );
    TEST_RES( f−>q == 0 );
    f = nouvelle_fraction ( 0 ,−4 );
    TEST_RES(f−>p == 0 );
    TEST_RES(f−>q == 1) ;
    
}

    
#endif
