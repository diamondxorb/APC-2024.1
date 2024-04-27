#include <stdio.h>
int main () {
    int i, contagem, numero, maior, posicao;
    contagem = 0;
    maior == 0;
    for(i=1; i<101; i++) {
        scanf("%d\n", &numero);
        contagem++;
        if(numero>=maior) {
            maior = numero;
            posicao = contagem;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}
