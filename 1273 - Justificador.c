#include <stdio.h>
#include <string.h>

int main () {
  int i, j, quantidade, maior, identacao, tamanho[50], contagem;
  char nomes[50][50];
  contagem = 0;
  while(1) {
    tamanho[0] = 0;
    maior = 0;
    identacao = 0;
    scanf("%d", &quantidade);
    if(quantidade==0) {
      break;
    }
    for(i=0; i<quantidade; i++) {
      scanf("%s", nomes[i]);
      tamanho[i] = strlen(nomes[i]);
      if(tamanho[i]>maior) {
        maior = tamanho[i];
      }
      if(i==0) {
        maior = tamanho[i];
      }
    }
    contagem++;
    if(contagem>1) {
        printf("\n");
    }
    for(i=0; i<quantidade; i++) {
      identacao = maior - tamanho[i];
      for(j=0; j<identacao; j++) {
        printf(" ");
      }
      printf("%s\n", nomes[i]);
    }
  }
  return 0;
}
