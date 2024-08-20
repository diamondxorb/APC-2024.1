#include <stdio.h>

int main () {
  int i, j, contagem;
  double soma, media, matriz[12][12];
  char operacao;
  contagem = 0;
  soma = 0;
  media = 0;
  scanf(" %c", &operacao);
  for(i=0; i<12; i++) {
    for(j=0; j<12; j++) {
      scanf("%lf", &matriz[i][j]);
      if(i+j>11) {
          soma+=matriz[i][j];
          contagem++;
      }
    }
  }
  media = soma/contagem;
  if(operacao=='S') {
      printf("%.1lf\n", soma);
  }
  else {
      printf("%.1lf\n", media);
  }
  return 0;
}
