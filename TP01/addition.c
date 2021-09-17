#include<stdio.h>

int pgcd(int a,int b)
{
  while (a!=b)
   {
     if (a>b){ 
       a=a-b; 
    } else {
      b=b-a;
    }
   }
  return a ;
}

int main() {
int c=pgcd(12,52);
printf("%d\n",c);
return 0 ;
}
