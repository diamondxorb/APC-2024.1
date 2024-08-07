#include <stdio.h>
#include <string.h>

int main () {
  int i, numero, originais, presentes, contagem, bilhetes[20000];
  while(1) {
    scanf("%d %d", &originais, &presentes);
    if(originais==0 && presentes==0) {
      break;
    }
    contagem = 0;
    memset(bilhetes, 0, sizeof(bilhetes));
    for(i=0; i<presentes; i++) {
      scanf("%d", &numero);
      bilhetes[numero]++;
      if(bilhetes[numero]==2) {
        contagem++;
      }
    }
    printf("%d\n", contagem);
  }
  return 0;
}
