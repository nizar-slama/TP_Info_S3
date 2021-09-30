int imin(int * T, int n){
    int indice_min=0
for (int i=1; i<n,i++){
if (T[1]<T[indice_min]){
indice_min=i;
}
}
return indice_min
}



float T[4]={5,-1,2,0}
int r=imin(T,4);
