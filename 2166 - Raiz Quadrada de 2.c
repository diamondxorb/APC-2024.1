#include <stdio.h>

int main () {
  int i, numero;
  double raiz;
  raiz = 0;
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    raiz+=2;
    raiz/=(raiz*raiz);
  }
  raiz+=1;
  printf("%.10lf\n", raiz);
  return 0;
}
