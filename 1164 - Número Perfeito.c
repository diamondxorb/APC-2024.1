#include <stdio.h>
int main () {
    int i, j, numero, n2, soma, contagem;
    scanf("%d\n", &numero);
    for(i=1; i <= numero; i++) {
        scanf("%d\n", &n2);
        soma = 0;
        contagem = 0;
        for(j=1; j<n2; j++) {
            contagem++;
            if(n2%contagem == 0) {
                soma+=contagem;
            }
        }
        if(soma != n2) {
            printf("%d nao eh perfeito\n", n2);
        }
        else {
            printf("%d eh perfeito\n", n2);
        }
    }
    return 0;
}
