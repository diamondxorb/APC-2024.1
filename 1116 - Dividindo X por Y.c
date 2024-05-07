#include <stdio.h>
int main () {
    int i, x, y, numero;
    double divisao;
    scanf("%d", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%d %d", &x, &y);
        divisao = x/(y*1.0);
        if(y==0) {
            printf("divisao impossivel\n");
        }
        else {
            printf("%.1lf\n", divisao);
        }
    }
    return 0;
}
