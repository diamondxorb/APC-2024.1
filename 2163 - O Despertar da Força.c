#include <stdio.h>

int main () {
  int i, j, linhas, colunas;
  scanf("%d %d", &linhas, &colunas);
  int matriz[linhas][colunas];
  for(i=0; i<linhas; i++) {
    for(j=0; j<colunas; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  for(i=1; i<linhas-1; i++) {
    for(j=1; j<colunas-1; j++) {
      if(matriz[i-1][j-1]==7 && matriz[i-1][j]==7 && matriz[i-1][j+1]==7) {
        if(matriz[i][j-1]==7 && matriz[i][j]==42 && matriz[i][j+1]==7) {
          if(matriz[i+1][j-1]==7 && matriz[i+1][j]==7 && matriz[i+1][j+1]==7) {
            printf("%d %d\n", i+1, j+1);
            return 0;
          }
        }
      }
    }
  }
  printf("0 0\n");
  return 0;
}
