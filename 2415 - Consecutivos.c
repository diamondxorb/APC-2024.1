#include <stdio.h>
int main () {
    int i, numero, numero2, contagem, proximo, soma;
    contagem = 1;
    soma = 1;
    scanf("%d\n", &numero);
    for(i=1; i<=numero; i++) {
        proximo=numero2;
        scanf("%d ", &numero2);
        if(numero2==proximo) {
            if(soma<contagem) {
                soma = contagem;
            }
            contagem++;
        }
        else {
            contagem = 1;
        }
    }
    printf("%d\n", soma+1);
    return 0;
}
