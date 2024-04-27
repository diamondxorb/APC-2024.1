#include <stdio.h>
int main () {
    int i, numero, contagem, tabuada;
    (2<numero) && (numero<1000);
    scanf("%d\n", &numero);
    for(i=1; i<11; i++) {
        contagem++;
        tabuada = contagem*numero;
        printf("%d x %d = %d\n", contagem, numero, tabuada);
    }
    return 0;
}
