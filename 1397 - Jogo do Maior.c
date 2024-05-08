#include <stdio.h>
int main () {
    int i, numero, a, b, cont1, cont2;
    while(1) {
        scanf("%d", &numero);
        if(numero==0) {
            break;
        }
        cont1 = 0;
        cont2 = 0;
        for(i=1; i<=numero; i++) {
            scanf("%d %d", &a, &b);
            if(a>b) {
                cont1++;
            }
            else if(b>a) {
                cont2++;
            }
        }
        printf("%d %d\n", cont1, cont2);
    }
    return 0;
}
