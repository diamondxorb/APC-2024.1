#include <stdio.h>
int main () {
    int i, numero, fibonacii[46];
    scanf("%d", &numero);
    for(i=0; i<numero-1; i++) {
        fibonacii[i] = fibonacii[i-1] + fibonacii[i-2];
        fibonacii[0] = 0;
        fibonacii[1] = 1;
        printf("%d ", fibonacii[i]);
    }
    fibonacii[numero-1] = fibonacii[numero-2] + fibonacii[numero-3];
    printf("%d\n", fibonacii[numero-1]);
    return 0;
}
