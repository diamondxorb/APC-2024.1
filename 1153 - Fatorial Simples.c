#include <stdio.h>
int main () {
    int i, numero, fatorial, contagem, prox;
    contagem = 0;
    fatorial = 1;
    scanf("%d\n", &numero);
    for(i=1; i<=numero; i++) {
        contagem++;
        fatorial = contagem*fatorial; 
    }
    printf("%d\n", fatorial);
    return 0;
}
