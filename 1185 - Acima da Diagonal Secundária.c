#include <stdio.h>

int main () {
  int i, j;
  double soma, media, matriz[12][12];
  char operacao;
  soma = 0;
  media = 0;
  scanf(" %c", &operacao);
  for(i=0; i<12; i++) {
    for(j=0; j<12; j++) {
      scanf("%lf", &matriz[i][j]);
      if(i+j<11) {
          soma+=matriz[i][j];
      }
    }
  }
  media = soma/66.0;
  if(operacao=='S') {
      printf("%.1lf\n", soma);
  }
  else {
      printf("%.1lf\n", media);
  }
  return 0;
}
