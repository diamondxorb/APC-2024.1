#include <stdio.h>
#include <stdlib.h>

int main () {
  int i, j, numero, linhas, colunas, poki, pokj, ashi, ashj, distancia;
  while(scanf("%d %d", &linhas, &colunas)!=EOF) {
    distancia = 0;
    for(i=0; i<linhas; i++) {
      for(j=0; j<colunas; j++) {
        numero = 0;
        scanf("%d", &numero);
        if(numero==2) {
          poki = i;
          pokj = j;
        }
        else if(numero==1) {
          ashi = i;
          ashj = j;
        }
      }
    }
    distancia = abs(poki-ashi) + abs(pokj-ashj);
    printf("%d\n", distancia);
  }
}
