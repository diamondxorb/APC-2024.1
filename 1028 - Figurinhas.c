#include <stdio.h>
#include <string.h>

int mdc(int a, int b) {
  int aux;
  while(b) {
    aux = a%b;
    a = b;
    b = aux;
  }
  return a;
}

int main () {
  int i, resposta, numero, ricardo, vicente;
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%d %d", &ricardo, &vicente);
    resposta = mdc(ricardo, vicente);
    printf("%d\n", resposta);
  }
  return 0;
}
