#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int *V , int n){
  int aux;
  int Vetor[n];
  int posicao;
  Vetor[0] = V[0];


  for (size_t i = 1; i < n; i++) {
    aux = V[i];
    for (size_t j = i; j > 0; j--) {
      if(aux < Vetor[j-1]){
        Vetor[j] = Vetor[j-1];
        posicao = j-1;
      }//if
    }//for1
    Vetor[posicao] = aux;
  }//for2
  for (size_t i = 0; i < n; i++) {
    V[i] = Vetor[i];
  }//for3
}//insertionSort

int main(){
  int vetor[10] = {9,54,7,3,63,6,31,17,32,80}; //vetor

  InsertionSort(vetor, 10); //chamada da funcao

  for(size_t i = 0; i < 10; i++){ //for para printar na tela o vetor
    printf("%i ", vetor[i]);
  }

  return 0;
}
