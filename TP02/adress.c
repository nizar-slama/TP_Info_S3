#include<stdio.h>
 int
 main(){
     int x0=0;
     int x1=0;
    printf("&x0=%p\n",&x0);
    printf("&x1=%p\n",&x1);
    printf("&x0-&x1=%ld\n", &x0-&x1);
    int x2=0;
    printf("&x0-&x2=%ld\n", &x0-&x2);
    printf("&x1-&x2=%ld\n", &x1-&x2);
    printf ( "x0 = %d\nx1 = %d\nx2 = %d\n" , x0 , x1 , x2 ) ;
    x1 = 3 ;
    printf ( "x0 = %d\nx1 = %d\nx2 = %d\n" , x0 , x1 , x2 ) ;
    *( & x1 ) = 6 ;
    printf ( "x0 = %d\nx1 = %d\nx2 = %d\n" , x0 , x1 , x2 ) ;
    printf ( "%p ==\n%p\n" , & x1 , & x0 - 1 ) ;
    *( & x0 -1 ) = 6 ;
    printf ( "x0 = %d\nx1 = %d\nx2 = %d\n" , x0 , x1 , x2 ) ;
    return 0;
 }
 
