#include <stdio.h>
int main () {
    double nota, nota2, media;
    scanf("%lf\n", &nota);
    while((0>nota) || (nota>10)) {
        printf("nota invalida\n");
        scanf("%lf\n", &nota);
    }
    scanf("%lf\n", &nota2);
    while((0>nota2) || (nota2>10)) {
        printf("nota invalida\n");
        scanf("%lf\n", &nota2);
    }
    media = (nota+nota2)/2.0;
    printf("media = %.2lf\n", media);
    return 0;
}
