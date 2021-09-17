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
return pgcd(a,b);

int c=pgcd(12,52);
