#include <stdio.h>
int imin(int*T,int N){
  int indice.min = 0;
  for (int i=1; i<n; i++){
    if (T[i]<T[indice_min]){
      indice_min = i;
    }
  }
  return indice_min;
}
void tri(int*t, int n){
if (n<=1){
return;
}
int i= imin(t,n)
int tmp=t[i]
t[i]=t[0]
t[0]=tmp
tri (t+1,n-1);
}
graph display t[0]@n 
