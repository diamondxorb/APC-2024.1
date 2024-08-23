#include <stdio.h>

int main () {
  int i, j, linhas, colunas, resultado, atual;
  int matriz[100][100];
  resultado = 0;
  scanf("%d %d", &linhas, &colunas);
  for(i=0; i<linhas; i++) {
    for(j=0; j<colunas; j++) {
        scanf("%d", &matriz[i][j]);
    }
  }
  for(i=0; i<linhas; i++) {
    atual = 0;
    for(j=0; j<colunas; j++) {
      atual+=matriz[i][j];
    }
    if(atual>resultado) {
      resultado = atual;
    }
  }
  for(i=0; i<colunas; i++) {
    atual = 0;
    for(j=0; j<linhas; j++) {
      atual+=matriz[j][i];
    }
    if(atual>resultado) {
      resultado=atual;
    }
  }
  printf("%d\n", resultado);
  return 0;
}
