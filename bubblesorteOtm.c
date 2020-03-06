#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *V, int tam){
  int X;
  int Ver = 0;
  int tam1 = tam;
  for(int i = 0; i<tam; i++){
    for(int j = 0; j<tam1-1; j++){
      if(V[j] > V[j+1]){
        X = V[j+1];
        V[j+1] = V[j];
        V[j] = X;
        Ver = 1;
      }
    }
    tam1--;
    if(Ver == 0){
      tam = 10;
    }
  }
}

int main(){
  int V[10] = {10,2,32,14,56,78,4,8,23,0};
  bubblesort(V,10);
  printf("{");
  for(int i = 0; i<10; i++){
    printf("%i, ", V[i]);
  }
  printf("}");

  return 0;
}
