#include <stdio.h>
#include <string.h>

int main () {
  int i, j, numero, quantidade, contagem;
  char indioma[20], comparacao[20];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    quantidade = 0;
    contagem = 1;
    scanf("%d", &quantidade);
    for(j=0; j<quantidade; j++) {
      if(j!=0) {
        strncpy(comparacao, indioma, 20);
        comparacao[20] = '\0';
      }
      scanf("%s", indioma);
      if(j!=0) {
        if(strcmp(indioma, comparacao)==0) {
          contagem++;
        }
      }
    }
    if(contagem==(quantidade)){
      printf("%s\n", indioma);
    }
    else {
      printf("ingles\n");
    }
  }
  return 0;
}
