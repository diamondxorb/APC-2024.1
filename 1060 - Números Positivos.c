#include <stdio.h>
int main () {
    int i, contagem;
    double numero;
    contagem = 0;
    for(i=1; i<7; i++) {
        scanf("%lf\n", &numero);
        if(numero > 0) {
            contagem ++;
        }
    }
    printf("%d valores positivos\n", contagem++);
    return 0;
}
