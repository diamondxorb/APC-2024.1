#include <stdio.h>

int main () {
  int i, j, disciplinas, soma_c, soma;
  int notas[40], carga[40];
  double ira;
  while(scanf("%d", &disciplinas)!=EOF) {
    soma = 0;
    soma_c = 0;
    for(i=0; i<disciplinas; i++) {
      scanf("%d %d", &notas[i], &carga[i]);
      soma+=(notas[i]*carga[i]);
      soma_c+=carga[i];
    }
    ira = soma/(soma_c*100.0);
    printf("%.4lf\n", ira);
  }
  return 0;
}
