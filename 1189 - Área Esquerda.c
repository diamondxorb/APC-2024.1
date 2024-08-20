#include <stdio.h>

int main () {
  int i, j, contagem, variavel;
  double soma, media, matriz[12][12];
  char operacao;
  soma = 0;
  media = 0;
  contagem = 0;
  variavel = 0;
  scanf(" %c", &operacao);
  for(i=0; i<12; i++) {
    for(j=0; j<12; j++) {
      scanf("%lf", &matriz[i][j]);
      if(i+j<11 && i+j<variavel) {
          soma+=matriz[i][j];
          contagem++;
      }
    }
    variavel+=2;
    if(j==4) {
      break;
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
