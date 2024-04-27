#include <stdio.h>
int main () {
    int i, numero;
    double a, b, c, media;
    scanf("%d\n", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%lf %lf %lf\n", &a, &b, &c);
        media = ((a*2)+(b*3)+(c*5))/10.0;
        printf("%.1lf\n", media);
    }
    return 0;
}
