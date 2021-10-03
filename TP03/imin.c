int imin(int*T,int N){
  int indice.min = 0;
  for (int i=1; i<n; i++){
    if (T[i]<T[indice_min]){
      indice_min = i;
    }
  }
  return indice_min;
}
