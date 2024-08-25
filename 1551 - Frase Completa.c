#include <stdio.h>
#include <string.h>

int main () {
  int idx, jdx, kdx, numero, contagem, alfie[26];
  char frase[1000];
  char afalbeto[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  scanf("%d", &numero);
  for(idx=0; idx<numero; idx++) {
    contagem = 0;
    memset(alfie, 0, sizeof(alfie));
    scanf(" %[^\n]", frase);
    for(jdx=0; jdx<strlen(frase); jdx++) {
      for(kdx=0; kdx<26; kdx++) {
        if(frase[jdx]==afalbeto[kdx]) {
          alfie[kdx]++;
        }
      }
    }
    for(jdx=0; jdx<26; jdx++) {
      if(alfie[jdx]!=0) {
        contagem++;
      }
    }
    if(contagem==26) {
      printf("frase completa\n");
    }
    else if(contagem>12) {
      printf("frase quase completa\n");
    }
    else {
      printf("frase mal elaborada\n");
    }
    memset(frase, 0, sizeof(frase));
  }
  return 0;
}
