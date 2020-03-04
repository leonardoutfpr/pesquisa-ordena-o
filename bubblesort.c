#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *V, int tam){
  int X;
  for(int i = 0; i<tam; i++){
    for(int j = 0; j<tam; j++){
      if(V[j] > V[j+1] && j!= tam-1){
        X = V[j+1];
        V[j+1] = V[j];
        V[j] = X;
      }
    }
  }
}

int main(){
  int V[10] = {9,54,7,3,61,6,31,17,32,80};
  bubblesort(V,10);
  printf("{");
  for(int i = 0; i<10; i++){
    printf("%i, ", V[i]);
  }
  printf("}");

  return 0;
}
