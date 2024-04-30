#include <stdio.h>
int main () {
    int i, numero, contagem;
    scanf("%d\n", &numero);
    contagem = 0;
    while(contagem<=numero) {
        contagem++;
        if(numero%contagem==0) {
            printf("%d\n", contagem);
        }
    }
    return 0;
}
