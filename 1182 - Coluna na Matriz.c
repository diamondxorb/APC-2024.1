#include <stdio.h>

int main () {
  int i, j, numero;
  double soma, media, matriz[12][12];
  char operacao;
  soma = 0;
  media = 0;
  scanf("%d", &numero);
  scanf(" %c", &operacao);
  for(i=0; i<12; i++) {
    for(j=0; j<12; j++) {
      scanf("%lf", &matriz[i][j]);
    }
  }
  for(i=0; i<12; i++) {
      soma+=matriz[i][numero];
  }
  media = soma/12.0;
  if(operacao=='S') {
    printf("%.1lf\n", soma);
  }
  else {
    printf("%.1lf\n", media);
  }
  return 0;
}
