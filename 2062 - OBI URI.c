#include <stdio.h>
#include <string.h>

int main () {
  int i, tamanho, numero;
  char palavra[20];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    tamanho = 0;
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    if(i>0) {
      printf(" ");
    }
    if(tamanho==3) {
      if(palavra[0]=='O' && palavra[1]=='B') {
        printf("OBI");
      }
      else if(palavra[0]=='U' && palavra[1]=='R') {
        printf("URI");
      }
      else {
        printf("%s", palavra);
      }
    }
    else {
      printf("%s", palavra);
    }
    memset(palavra, '\0', sizeof(palavra));
  }
  printf("\n");
  return 0;
}
