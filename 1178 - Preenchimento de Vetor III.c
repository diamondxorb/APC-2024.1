#include <stdio.h>
int main () {
    int i;
    double numero, vetor_n[100];
    scanf("%lf", &numero);
    for(i=0; i<100; i++) {
        vetor_n[i] = vetor_n[i-1]/2.0;
        vetor_n[0] = numero;
        printf("N[%d] = %.4lf\n", i, vetor_n[i]);
    }
    return 0;
}
