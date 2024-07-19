#include <stdio.h>
int main () {
    int i, j, k, quantidade, frequencia[2000], numero;
    for(k=0; k<2001; k++) {
        frequencia[k]=0;
    }
    scanf("%d", &quantidade);
    for(i=0; i<quantidade; i++) {
        scanf("%d", &numero);
        frequencia[numero]++;
    }
    for(j=0; j<2001; j++) {
        if(frequencia[j]>0) {
            printf("%d aparece %d vez(es)\n", j, frequencia[j]);
        }
    }
    return 0;
}
