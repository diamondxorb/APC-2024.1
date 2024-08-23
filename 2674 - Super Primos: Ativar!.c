#include <stdio.h>
#include <math.h>

int primo(int num) {
  int i, raiz;
  raiz = (int) sqrt(num);
  if(num!=2  && num%2==0 || num==1) {
    return 0;
  }
  for(i=3; i<=raiz; i+=2) {
    if(num%i==0) {
      return 0;
    }
  }
  return 1;
}

int main () {
  int i, numero, aux, aux2, contagem;
  while(scanf("%d", &numero)!=EOF) {
    if(primo(numero)==0) {
      printf("Nada\n");
    }
    else {
      contagem = 0;
      i = 0;
      aux = numero;
      while(1) {
        if(aux==0) {
          break;
        }
        i++;
        aux2 = aux%10;
        if(primo(aux2)==1) {
          contagem++;
        }
        else {
          printf("Primo\n");
          break;
        }
        aux/=10;
      }
      if(contagem==i) {
        printf("Super\n");
      }
    }
  }
  return 0;
}
