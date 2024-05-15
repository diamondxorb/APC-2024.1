#include <stdio.h>
int main () {
    int i, numero, vetor[10];
    scanf("%d", &numero);
    vetor[0] = numero;
    printf("N[0] = %d\n", numero);
    for(i=1; i<10; i++) {
        vetor[i] = vetor[i-1]*2;
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}
