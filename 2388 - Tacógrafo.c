#include <stdio.h>
int main () {
    int i, numero, tempo, velocidade, distancia, total;
    total = 0;
    scanf("%d", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%d %d", &tempo, &velocidade);
        distancia = tempo*velocidade;
        total+=distancia;
    }
    printf("%d\n", total);
    return 0;
}
