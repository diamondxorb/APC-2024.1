#include <stdio.h>
int main () {
    int i, j, numero, contagem;
    scanf("%d", &numero);
    if(numero%2!=0) {
        contagem = numero;
        for(i=1; i<=6; i++) {
            printf("%d\n", contagem);
            contagem+=2;
        }
    }
    else {
        contagem = numero+1;
        for(j=1; j<=6; j++) {
            printf("%d\n", contagem);
            contagem+=2;
        }
    }
    return 0;
}
