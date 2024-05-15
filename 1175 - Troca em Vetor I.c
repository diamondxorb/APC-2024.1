#include <stdio.h>
int main () {
    int i, j, vetor_n[20];
    for(i=0; i<20; i++) {
        scanf("%d", &vetor_n[i]);
    }
    for(j=0; j<20; j++) {
        printf("N[%d] = %d\n", j, vetor_n[19-j]);
    }
    return 0;
}
