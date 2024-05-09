#include <stdio.h>
int main () {
    int i, numero, raio_1, raio_2, conduite;
    scanf("%d", &numero);
    for(i=1; i<=numero; i++) {
        conduite = 0;
        scanf("%d %d", &raio_1, &raio_2);
        conduite = raio_1+raio_2;
        printf("%d\n", conduite);
    }
    return 0;
}
