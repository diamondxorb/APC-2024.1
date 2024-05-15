#include <stdio.h>
int main () {
    int soma, contagem, numero;
    double media;
    contagem = 0;
    soma = 0;
    while(1) {
        scanf("%d", &numero);
        if(numero<0) {
            break;
        }
        soma+=numero;
        contagem++;
    }
    media = soma/(double)contagem;
    printf("%.2lf\n", media);
    return 0;
}
