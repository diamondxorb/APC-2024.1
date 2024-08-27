#include <stdio.h>
#include <string.h>

int main () {
  int i, j, idx, dif, numero, maior, menor, tam_1, tam_2;
  char primeira[50], segunda[50], resposta[100];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%s %s", primeira, segunda);
    idx = 0;
    tam_1 = strlen(primeira);
    tam_2 = strlen(segunda);
    if(tam_1>tam_2) {
      maior = tam_1;
      menor = tam_2;
    }
    else {
      maior = tam_2;
      menor = tam_1;
    }
    dif = maior-menor;
    for(j=0; j<menor; j++) {
      resposta[idx] = primeira[j];
      idx++;
      resposta[idx] = segunda[j];
      idx++;
    }
    if(dif!=0) {
      for(j=menor; j<=maior; j++) {
        if(tam_1>tam_2) {
          resposta[idx] = primeira[j];
          idx++;
        }
        else {
          resposta[idx] = segunda[j];
          idx++;
        }
      }
    }
    printf("%s\n", resposta);
    memset(primeira, '\0', sizeof(primeira));
    memset(segunda, '\0', sizeof(segunda));
    memset(resposta, '\0', sizeof(resposta));
    maior = 0;
    menor = 0;
  }
  return 0;
}
