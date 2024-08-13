#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
  int i, j, k, identacao, tamanho, numero;
  while(1) {
    scanf("%d", &tamanho);
    if(tamanho==0) {
      break;
    }
    for(i=0; i<tamanho; i++) {
      for(j=0; j<tamanho; j++) {
        numero = abs(i-j)+1;
        // floor(log10(x))+1 dá quantos dígitos um número tem! //
        identacao = floor(log10(numero))+1;
        for(k=0; k<3-identacao; k++) {
            printf(" ");
        }
        printf("%d", numero);
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
