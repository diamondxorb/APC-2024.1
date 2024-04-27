#include <stdio.h>
int main () {
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1, v1, v2, v3, v4, v5;
    0<valor<1000000;
    scanf("%d\n", &valor);
    notas100 = valor/100;
    v1 = valor - notas100*100;
    notas50 = v1/50;
    v2 = v1 - notas50*50;
    notas20 = v2/20;
    v3 = v2 - notas20*20;
    notas10 = v3/10;
    v4 = v3 - notas10*10;
    notas5 = v4/5;
    v5 = v4 - notas5*5;
    notas2 = v5/2;
    notas1 = v5 - notas2*2;
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);
    return 0;
}
