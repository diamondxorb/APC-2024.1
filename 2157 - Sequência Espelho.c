#include <stdio.h>

int main () {
  int i, j, aux, aux2, inicio, fim, numero;
  scanf("%d", &numero);
  for(j=0; j<numero; j++) {
    scanf("%d %d", &inicio, &fim);
    for(i=inicio; i<=fim; i++) {
      printf("%d", i);
    }
    for(i=fim; i>=inicio; i--) {
      aux = i;
      while(1) {
        if(aux==0) {
          break;
        }
        aux2 = aux%10;
        printf("%d", aux2);
        aux = aux/10;
      }
    }
    printf("\n");
  }
  return 0;
}
