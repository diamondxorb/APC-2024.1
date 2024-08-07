#include <stdio.h>
#include <string.h>

int main () {
  int i, numero, contagem, espacos, carimbadas, compradas, figurinhas[100];
  memset(figurinhas, 0, sizeof(figurinhas));
  contagem = 0;
  scanf("%d %d %d", &espacos, &carimbadas, &compradas);
  for(i=0; i<carimbadas; i++) {
    scanf("%d", &numero);
    figurinhas[numero] = 1;
  }
  for(i=0; i<compradas; i++) {
    scanf("%d", &numero);
    if(figurinhas[numero]==1) {
      contagem++;
      figurinhas[numero]++;
    }
  }
  printf("%d\n", carimbadas-contagem);
  return 0;
}
