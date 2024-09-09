#include <stdio.h>
#include <string.h>

void bubblesort(int vetor[], unsigned short num){
  int i, j, aux;
  for(j=0; j<num; j++) {
    for(i=0; i<num-1; i++) {
      if(vetor[i] > vetor[i+1]){
        aux = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = aux;
      }
    }
  }
}

int main () {
  unsigned short i, j, numero;
  while(scanf("%hu", &numero)!=EOF) {
    int quantidade[numero], aux[numero];
    char carne[numero][20];
    for(i=0; i<numero; i++) {
      scanf("%s %d", carne[i], &quantidade[i]);
      aux[i] = quantidade[i];
    }
    bubblesort(quantidade, numero);
    for(i=0; i<numero-1; i++) {
      for(j=0; j<numero; j++) {
        if(quantidade[i]==aux[j]) {
          printf("%s ", carne[j]);
        }
      }
    }
    for(j=0; j<numero; j++) {
      if(quantidade[numero-1]==aux[j]) {
        printf("%s\n", carne[j]);
      }
    }
    memset(carne, '\0', sizeof(carne));
    memset(quantidade, 0, sizeof(quantidade));
    memset(aux, 0, sizeof(aux));
  }
  return 0;
}
