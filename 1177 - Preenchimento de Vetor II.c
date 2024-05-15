#include <stdio.h>
int main () {
    int i, numero, contagem;
    scanf("%d", &numero);
    contagem = 0;
    for(i=0; i<1000; i++) {
        printf("N[%d] = %d\n", i, contagem);
        contagem++;
        if(contagem==numero) {
            contagem = 0;
        }
    }
    return 0;
}
