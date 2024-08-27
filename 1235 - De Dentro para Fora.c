#include <stdio.h>
#include <string.h>

int main () {
  int i, j, idx, aux, tamanho, numero;
  char lixo, frase[100];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%c", &lixo);
    scanf("%[^\n]", frase);
    aux = strlen(frase);
    tamanho = strlen(frase)/2;
    for(j=0; j<tamanho; j++) {
      idx = (tamanho-j)-1;
      printf("%c", frase[idx]);
      idx = 0;
    }
    for(j=0; j<tamanho; j++) {
      idx = (aux-j)-1;
      printf("%c", frase[idx]);
      idx = 0;
    }
    printf("\n");
    memset(frase, '\0', sizeof(frase));
    tamanho = 0;
  }
  return 0;
}
