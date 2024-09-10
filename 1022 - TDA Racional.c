#include <stdio.h>
#include <stdlib.h>

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
  int i, casos, div, numerador, denominador, n1, n2, d1, d2;
  char operacao;
  scanf("%d", &casos);
  for(i=0; i<casos; i++) {
    scanf("%d / %d %c %d / %d", &n1, &d1, &operacao, &n2, &d2);
    if(operacao=='+') {
      numerador = (n1*d2)+(n2*d1);
      denominador = d1*d2;
    }
    else if(operacao=='-') {
      numerador = (n1*d2)-(n2*d1);
      denominador = d1*d2;
    }
    else if(operacao=='*') {
      numerador = n1*n2;
      denominador = d1*d2;
    }
    else {
      numerador = n1*d2;
      denominador = n2*d1;
    }
    printf("%d/%d = ", numerador, denominador);
    div = mdc(numerador, denominador);
    numerador/=div;
    denominador/=div;
    if(denominador<0) {
      numerador*=-1;
      denominador = abs(denominador);
    }
    printf("%d/%d\n", numerador, denominador);
  }
  return 0;
}
