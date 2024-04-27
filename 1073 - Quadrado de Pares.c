#include <stdio.h>
int main () {
    int i, soma, numero, quadrado;
    soma = 0;
    scanf("%d\n", &numero);
    (numero < 2000) && (5 < numero);
    for(i=1; i <= numero/2; i++) {
        soma += 2;
        quadrado = soma*soma;
        printf("%d^2 = %d\n", soma, quadrado);
    }
    return 0;
}
