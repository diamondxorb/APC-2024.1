#include <stdio.h>
#include <stdlib.h>

void bubblesort(int vetor[], int num){
	int i, j;
	for(j=0; j<num; j++) {
		for(i=0; i<num-1; i++) {
			if(vetor[i] > vetor[i+1]){
				int aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
			}
		}
	}
}

int main () {
  int i, j, competidores, minimo, ultimo, contagem;
  scanf("%d", &competidores);
  int notas[competidores];
  scanf("%d", &minimo);
  for(i=0; i<competidores; i++) {
    scanf("%d", &notas[i]);
  }
  bubblesort(notas, competidores);
  contagem = minimo;
  for(i=0; i<competidores-minimo; i++) {
    if(notas[i]==notas[competidores-minimo]) {
      contagem++;
    }
  }
  printf("%d\n", contagem);
  return 0;
}
