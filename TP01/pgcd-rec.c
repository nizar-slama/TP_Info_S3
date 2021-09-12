int 
pgcd (int a , int b){
  if (a==b) {
    return a;
  } else if (a>b) {
    return pgcd (a-b, b);
  } else { 
    return pgcd (a , b-a );
  }
}
int c = pgcd(12 , 51);
