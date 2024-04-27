#include <stdio.h>
int main () {
    int i, n, numero;
    numero < 10000;
    scanf("%d\n", &n);
    for(i=1; i<=n; i++) {
        scanf("%d\n", &numero);
        if((numero%2==0) && (numero!=0)) {
            printf("EVEN");
        }
        else if(numero%2!=0) {
            printf("ODD");
        }
        if(numero>0) {
            printf(" POSITIVE\n");
        }
        else if(numero<0) {
            printf(" NEGATIVE\n");
        }
        if(numero==0) {
            printf("NULL\n");
        }
    }
    return 0;
}
