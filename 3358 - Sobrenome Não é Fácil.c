#include <stdio.h>
#include <string.h>

int eh_vogal(char letra) {
  int i;
  char vogais_mai[] = {'A','E','I','O','U'};
  char vogais_min[] = {'a','e','i','o','u'};
  for(i=0; i<5; i++) {
    if(letra==vogais_min[i] || letra==vogais_mai[i]) {
      return 0;
    }
  }
  return 1;
}

int main () {
  int i, j, facil, numero, tamanho, contagem;
  char sobrenome[42];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%s", sobrenome);
    contagem = 0;
    facil = 1;
    tamanho = strlen(sobrenome);
    for(j=0; j<tamanho; j++) {
      if(eh_vogal(sobrenome[j])==1) {
        contagem++;
      }
      else {
        contagem = 0;
      }
      if(contagem==3) {
        facil = 0;
        break;
      }
    }
    if(facil==0) {
      printf("%s nao eh facil\n", sobrenome);
    }
    else {
      printf("%s eh facil\n", sobrenome);
    }
    memset(sobrenome, '\0', sizeof(sobrenome));
  }
  return 0;
}
