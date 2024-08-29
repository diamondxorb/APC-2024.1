#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
  int i, tamanho, cont, total, numero;
  char lixo, corvo[10];
  cont = 0;
  total = 0;
  while(1) {
    scanf("%[^\n]", corvo);
    scanf("%c", &lixo);
    tamanho = strlen(corvo);
    if(tamanho==3) {
      for(i=0; i<tamanho; i++) {
        numero = 0;
        if(corvo[i]=='*') {
          numero = (int) pow(2,(2-i));
          total+=numero;
        }
      }
    }
    else {
      printf("%d\n", total);
      total = 0;
      cont++;
    }
    memset(corvo, '\0', sizeof(corvo));
    if(cont==3) {
      break;
    }
  }
  return 0;
}
