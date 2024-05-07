#include <stdio.h>
int main () {
    int i, quant, numero, contagem, soma;
    scanf("%d", &quant);
    for(i=1; i<=quant; i++) {
        scanf("%d", &numero);
        contagem = 0;
        soma = 0;
        while(1) {
            contagem++;
            if(numero%contagem==0) {
                soma++;
            }
            if(contagem>numero) {
                break;
            }
        }
        if(soma==2) {
            printf("%d eh primo\n", numero);
        }
        else {
            printf("%d nao eh primo\n", numero);
        }
    }
    return 0;
}
