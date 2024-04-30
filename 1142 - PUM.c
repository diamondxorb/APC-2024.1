#include <stdio.h>
int main () {
    int i, numero, soma, soma2, soma3;
    scanf("%d\n", &numero);
    soma = -3;
    soma2 = -2;
    soma3 = -1;
    for(i=1; i<=numero; i++) {
        soma+=4;
        soma2+=4;
        soma3+=4;
        printf("%d %d %d PUM\n", soma, soma2, soma3);
    }
    return 0;
}
