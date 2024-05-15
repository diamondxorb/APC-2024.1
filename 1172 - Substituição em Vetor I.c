#include <stdio.h>
int main () {
    int i, vetor[10];
    for(i=0; i<10; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i]<=0) {
            vetor[i] = 1;
        }
        printf("X[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}
