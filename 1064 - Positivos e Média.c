#include <stdio.h>
int main () {
    int i, contagem;
    double numero, soma, media;
    contagem = 0;
    soma = 0;
    for(i=1; i<7; i++) {
        scanf("%lf\n", &numero);
        if(numero > 0) {
            contagem ++;
            soma = soma + numero;
        }
    }
    media = soma/contagem++;
    printf("%d valores positivos\n", contagem++ - 1);
    printf("%.1lf\n", media);
    return 0;
}
