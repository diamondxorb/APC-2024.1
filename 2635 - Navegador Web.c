#include <stdio.h>
#include <string.h>

int main () {
  int i, j, num_pesquisado, num_consultas, cont_sugerida, tamanho[10000], maior;
  char pesquisas[10000][100], consultas[100][100];
  scanf("%d", &num_pesquisado);
  for(i=0; i<num_pesquisado; i++) {
    scanf("%s", pesquisas[i]);
  }
  scanf("%d", &num_consultas);
  for(j=0; j<num_consultas; j++) {
    scanf("%s", consultas[j]);
    cont_sugerida = 0;
    tamanho[0] = 0;
    maior = 0;
    for(i=0; i<num_pesquisado; i++) {
      if(strncmp(pesquisas[i], consultas[j], strlen(consultas[j]))==0) {
        cont_sugerida++;
        tamanho[i] = strlen(pesquisas[i]);
        if(tamanho[i]>tamanho[i-1]) {
          maior = tamanho[i];
        }
      }
    }
    if(cont_sugerida!=0) {
      printf("%d %d\n", cont_sugerida, maior);
    }
    else {
      printf("-1\n");
    }
  }
  return 0;
}
