#include <stdio.h>
#include <string.h>

int digitos(int aux) {
  int aux2, resp;
  resp = 0;
  while(1) {
    if(aux==0) {
      break;
    }
    aux2 = aux%10;
    resp+=aux2;
    aux = aux/10;
  }
  return resp;
}

int main () {
  int i, j, numero, resultado, tamanho, soma_par, soma_impar;
  char visitante[1000];
  while(1) {
    scanf("%d", &numero);
    if(numero==0) {
      break;
    }
    for(i=0; i<numero; i++) {
      soma_impar = 0;
      soma_par = 0;
      resultado = 0;
      scanf("%s", visitante);
      tamanho = strlen(visitante);
      for(j=0; j<tamanho; j++) {
        if(j%2==0) {
          soma_par+=(visitante[j]-48);
        }
        else {
          soma_impar+=(visitante[j]-48);
        }
      }
      resultado+=digitos(soma_impar);
      resultado+=digitos(soma_par);
      printf("%d\n", resultado);
      memset(visitante, '\0', sizeof(visitante));
      tamanho = 0;
    }
  }
  return 0;
}
