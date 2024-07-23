#include <stdio.h>

int main () {
    int i, area, numero, quantidade, contagem, fluxo[10000];
    scanf("%d", &area);
    scanf("%d", &numero);
    for(i=0; i<numero; i++) {
        scanf("%d", &fluxo[i]);
        quantidade = area*fluxo[i];
        if(quantidade>=40000000) {
            contagem++;
        }
    }
    printf("%d\n", contagem);
    return 0;
}
