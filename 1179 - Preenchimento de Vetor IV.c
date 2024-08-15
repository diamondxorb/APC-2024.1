#include <stdio.h>
#include <stdlib.h>

int main () {
  int i, j, numero, cont_par, cont_impar, par[5], impar[5];
  cont_par = 0;
  cont_impar = 0;
  for(i=0; i<15; i++) {
    scanf("%d", &numero);
    if(numero%2==0) {
      par[cont_par] = numero;
      cont_par++;
    }
    else {
      impar[cont_impar] = numero;
      cont_impar++;
    }
    if(cont_par==5) {
      for(j=0; j<5; j++) {
        printf("par[%d] = %d\n", j, par[j]);
      }
      cont_par = 0;
    }
    else if(cont_impar==5) {
      for(j=0; j<5; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
        cont_impar = 0;
      }
    }
  }
  for(i=0; i<cont_impar; i++) {
    printf("impar[%d] = %d\n", i, impar[i]);
  }
  for(i=0; i<cont_par; i++) {
    printf("par[%d] = %d\n", i, par[i]);
  }
  return 0;
}
