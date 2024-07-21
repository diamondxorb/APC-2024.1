#include <stdio.h>
#include <string.h>

int main () {
  int i, j, numero, quantidade;
  char painel[1000];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%s", painel);
    quantidade = 0;
    for(j=0; j<strlen(painel); j++) {
      if(painel[j] == '1') {
        quantidade+=2;
      }
      else if(painel[j] == '2') {
        quantidade+=5;
      }
      else if(painel[j] == '3') {
        quantidade+=5;
      }
      else if(painel[j] == '4') {
        quantidade+=4;
      }
      else if(painel[j] == '5') {
        quantidade+=5;
      }
      else if(painel[j] == '6') {
        quantidade+=6;
      }
      else if(painel[j] == '7') {
        quantidade+=3;
      }
      else if(painel[j] == '8') {
        quantidade+=7;
      }
      else if(painel[j] == '9') {
        quantidade+=6;
      }
      else {
        quantidade+=6;
      }
    }
    printf("%d leds\n", quantidade);
  }
  return 0;
}
