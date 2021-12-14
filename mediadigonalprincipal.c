#include <stdio.h>
#include <stdlib.h>


float mediadiagonal(float matrizfuncao[][4]){
  int i, j;
  float soma = 0.0;
  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      if(i==j){
        soma += matrizfuncao[i][j];
      }
    }
  }
  return (soma*1.0)/4;
}

int main (){

  int i, j;
  float matriz[4][4], media;
  for(i=0; i<4; i++){
    printf("Linha %d\n", i+1);
    for(j=0; j<4; j++){
      scanf("%f", &matriz[i][j]);
    }
  }
  media = mediadiagonal(matriz);
  printf("A media da diagonal principal eh: %f", media);
  return 0;

}
