#include <stdio.h>
int main () {
    int i, numero, menor, posicao, vetor_x[1000];
    scanf("%d", &numero);
    scanf("%d ", &vetor_x[0]);
    menor = vetor_x[0];
    for(i=1; i<numero; i++) {
        scanf("%d ", &vetor_x[i]);
        if(vetor_x[i]< menor) {
            menor = vetor_x[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    return 0;
}
