#include <stdio.h>
#include <string.h>

int main () {
  int i, contagem, numero, total, compradas, figurinhas[300];
  scanf("%d", &total);
  scanf("%d", &compradas);
  contagem = 0;
  memset(figurinhas, 0, sizeof(figurinhas));
  for(i=0; i<compradas; i++) {
    scanf("%d", &numero);
    figurinhas[numero]++;
    if(figurinhas[numero]==1) {
      contagem++;
    }
  }
  printf("%d\n", total-contagem);
  return 0;
}
