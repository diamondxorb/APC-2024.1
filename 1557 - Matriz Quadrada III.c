#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
  int i, j, k, tamanho, maior;
  int numero[15][15], identacao[15][15];
  while(1) {
    scanf("%d", &tamanho);
    if(tamanho==0) {
      break;
    }
    maior = 0;
    for(i=0; i<tamanho; i++) {
      for(j=0; j<tamanho; j++) {
        numero[i][j] = (int) pow(2, abs(i+j));
        identacao[i][j] = floor(log10(numero[i][j]))+1;
        if(identacao[i][j]>maior) {
          maior = identacao[i][j];
        }
      }
    }
    for(i=0; i<tamanho; i++) {
      for(j=0; j<tamanho; j++) {
        for(k=0; k<maior-identacao[i][j]; k++) {
          printf(" ");
        }
        printf("%d", numero[i][j]);
        if(j!=tamanho-1) {
          printf(" ");
        }
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
