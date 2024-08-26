#include <stdio.h>
#include <string.h>

int main () {
  int i, j, numero, tamanho, tam_original;
  char frase[1000];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    tam_original = 0;
    scanf(" %[^\n]", frase);
    tamanho = strlen(frase);
    tam_original = tamanho;
    for(j=0; j<tamanho; j++) {
      if((frase[j]>='A' && frase[j]<='Z') || (frase[j]>='a' && frase[j]<='z')) {
        frase[j]+=3;
      }
    }
    if(tamanho%2!=0) {
      tamanho++;
    }
    tamanho/=2;
    for(j=0; j<tamanho; j++) {
      frase[j]-=1;
    }
    for(j=1; j<=tam_original; j++) {
      printf("%c", frase[tam_original-j]);
    }
    printf("\n");
    memset(frase, 0, sizeof(frase));
  }
  return 0;
}
