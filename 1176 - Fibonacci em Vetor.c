#include <stdio.h>
int main () {
    int i, j, numero, local; 
    double fibonacii[64];
    scanf("%d", &numero);
    for(i=0; i<64; i++) {
        fibonacii[i] = fibonacii[i-1] + fibonacii[i-2];
        fibonacii[0] = 0;
        fibonacii[1] = 1;
    }
    for(j=0; j<numero; j++) {
        scanf("%d", &local);
        printf("Fib(%d) = %.lf\n", local, fibonacii[local]);
    }
    return 0;
}
