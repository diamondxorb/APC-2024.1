#include <stdio.h>
#include <string.h>

int main () {
  int i, j, idx, contador, numero, tamanho;
  char lixo, frase[50], resposta[50];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%c", &lixo);
    scanf("%[^\n]", frase);
    idx = 0;
    contador = 1;
    tamanho = strlen(frase);
    for(j=0; j<tamanho; j++) {
      if(j>0) {
        if((frase[j-1]==' ') && (frase[j]>='a' && frase[j]<='z')) {
          contador = 1;
        }
        else {
          contador = 0;
        }
      }
      if(frase[j]>='a' && frase[j]<='z') {
        if(contador==1) {
          resposta[idx] = frase[j];
          idx++;
        }
      }
    }
    for(j=0; j<idx; j++) {
      printf("%c", resposta[j]);
    }
    printf("\n");
    memset(frase, '\0', sizeof(frase));
    memset(resposta, '\0', sizeof(resposta));
  }
  return 0;
}
