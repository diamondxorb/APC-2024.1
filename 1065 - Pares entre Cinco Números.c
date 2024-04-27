#include <stdio.h>
int main () {
    int i, contagem, numero;
    contagem = 0;
    for(i=1; i<6; i++) {
        scanf("%d\n", &numero);
        if(numero%2==0) {
            contagem++;
        }
    }
    printf("%d valores pares\n", contagem++);
    return 0;
}
