#include <stdio.h>
#include <string.h>

int main () {
  int i, asterisco, underline, tamanho;
  char lixo, frase[50];
  while(scanf("%[^\n]", frase)!=EOF) {
    scanf("%c", &lixo);
    asterisco = 0;
    underline = 0;
    tamanho = strlen(frase);
    for(i=0; i<tamanho; i++) {
      if(frase[i]=='_') {
        if(underline%2==0) {
          printf("%s", "<i>");
        }
        else {
          printf("%s", "</i>");
        }
        underline++;
      }
      else if(frase[i]=='*') {
        if(asterisco%2==0) {
          printf("%s", "<b>");
        }
        else {
          printf("%s", "</b>");
        }
        asterisco++;
      }
      else {
        printf("%c", frase[i]);
      }
    }
    printf("\n");
    memset(frase, '\0', sizeof(frase));
    tamanho = 0;
  }
  return 0;
}
