#include <stdio.h>
int main () {
    int i, numero, contagem;
    numero < 10000;
    contagem = 2;
    scanf("%d\n", &numero);
    if(numero > 2) {
        printf("2\n");
    }
    for(i=1; i<=10000/numero; i++) {
        contagem+=numero;
        if(contagem%numero==2) {
            printf("%d\n", contagem);
        }
    }
    return 0;
}
