#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *V , int n){
  int menor, aux, i, j = 0, fim, indice;
 
  fim = n;
 
  for(i = 0; i < fim; i++){
    menor = i;
    for(j = i; j < fim; j++){
      if(V[menor] > V[j]){
        menor = j;
      }//if
    }//for
    //printf("%i, ", menor);
    if( i != menor){
      aux = V[i];
      V[i] = V[menor];
      V[menor] = aux;
    }
   
    //printf("%i", menor);
  }//for
}//selectionSort

int main(){
  int vetor[10] = {9,54,7,3,63,6,31,17,32,80}; //vetor
 
  selectionSort(vetor, 10); //chamada da funcao
 
  for(size_t i = 0; i < 10; i++){ //for para printar na tela o vetor
    printf("%i ", vetor[i]);
  }
 
  return 0;
}
