#include <stdio.h>
int main () {
    int i, numero, contagem;
    while(1) {
        scanf("%d", &numero);
        if(numero==0) {
            break;
        }
        contagem = 1;
        for(i=1; i<numero; i++) {
            printf("%d ", contagem);
            contagem++;
        }
        printf("%d\n", numero);
    }
    return 0;
}
