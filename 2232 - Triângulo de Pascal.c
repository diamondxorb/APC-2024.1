#include <stdio.h>
#include <math.h>

int main () {
  int i, numero, linha, triangulo;
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%d", &linha);
    triangulo = 0;
    while(linha) {
      linha--;
      triangulo += (int) pow(2, linha);
    }
    printf("%d\n", triangulo);
  }
  return 0;
}
