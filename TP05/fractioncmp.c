#include "fraction.c"
int 
fraction cmp(struct fraction_s *f1, struct fraction_s *f2){
    return *numerateur(f1) * *denominateur(f2) - *denominateur(f1)**numerateur
