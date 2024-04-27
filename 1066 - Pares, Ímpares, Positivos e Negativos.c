#include <stdio.h>
int main () {
    int i, cont1, cont2, cont3, cont4, numero;
    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    cont4 = 0;
    for(i=1; i<6; i++) {
        scanf("%d\n", &numero);
        if(numero%2==0) {
            cont1++;
        }
        else {
            cont2++;
        }
        if(numero>0) {
            cont3++;
        }
        if(numero<0) {
            cont4++;
        }
    }
    printf("%d valor(es) par(es)\n", cont1++);
    printf("%d valor(es) impar(es)\n", cont2++);
    printf("%d valor(es) positivo(s)\n", cont3++);
    printf("%d valor(es) negativo(s)\n", cont4++);
    return 0;
}
