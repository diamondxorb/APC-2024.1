#include <stdio.h>

int main () {
  int i, numero, contagem;
  double impeach;
  int votos[100000];
  while(scanf("%d", &numero)!=EOF) {
    contagem = 0;
    for(i=0; i<numero; i++) {
      scanf("%d", &votos[i]);
      if(votos[i]==1) {
        contagem++;
      }
    }
    impeach = (2.0*numero)/3.0;
    if(contagem>=impeach) {
      printf("impeachment\n");
    }
    else {
      printf("acusacao arquivada\n");
    }
  }
  return 0;
}
