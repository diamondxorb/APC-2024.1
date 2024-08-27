#include <stdio.h>
#include <string.h>

int main () {
  int i, j, idx, numero, contador, tam_1, tam_2;
  char valor_a[1000], valor_b[1000];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%s %s", valor_a, valor_b);
    contador = 0;
    tam_1 = strlen(valor_a);
    tam_2 = strlen(valor_b);
    if(tam_2>tam_1) {
      printf("nao encaixa\n");
      continue;
    }
    idx = tam_1-tam_2;
    for(j=0; j<tam_2; j++) {
      if(valor_a[idx]==valor_b[j]) {
        contador++;
      }
      idx++;
    }
    if(contador==tam_2) {
      printf("encaixa\n");
    }
    else {
      printf("nao encaixa\n");
    }
    memset(valor_a, '\0', sizeof(valor_a));
    memset(valor_b, '\0', sizeof(valor_b));
    idx = 0;
  }
  return 0;
}
