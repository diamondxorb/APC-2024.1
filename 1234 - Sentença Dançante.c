#include <stdio.h>
#include <string.h>

int main () {
  int i, contador, tamanho;
  char lixo, frase[50];
  while(scanf("%[^\n]", frase)!=EOF) {
    //Serve para resolver o problema do buffer do scanf!//
    scanf("%c", &lixo);
    tamanho = strlen(frase);
    contador = 0;
    for(i=0; i<tamanho; i++) {
      if((frase[i]>='A' && frase[i]<='Z') || (frase[i]>='a' && frase[i]<='z')) {
        if(contador%2==0) {
          if(frase[i]>='a' && frase[i]<='z') {
            frase[i]-=32;
          }
        }
        else if(contador%2!=0) {
          if(frase[i]>='A' && frase[i]<='Z') {
            frase[i]+=32;
          }
        }
        contador++;
      }
    }
    printf("%s\n", frase);
    memset(frase, '\0', sizeof(frase));
    tamanho = 0;
  }
  return 0;
}
