#include <stdio.h>
int main () {
    int i;
    double vetor_A[100];
    for(i=0; i<100; i++) {
        scanf("%lf", &vetor_A[i]);
        if(vetor_A[i]<=10) {
            printf("A[%d] = %.1lf\n", i, vetor_A[i]);
        }
    }
    return 0;
}
