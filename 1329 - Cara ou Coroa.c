#include <stdio.h>
int main () {
    int i, numero, cara_coroa, mary, john;
    while(1) {
        scanf("%d", &numero);
        mary = 0;
        john = 0;
        if(numero==0) {
            break;
        }
        for(i=1; i<=numero; i++) {
            scanf("%d", &cara_coroa);
            if(cara_coroa==0) {
                mary++;
            }
            else {
                john++;
            }
        }
        printf("Mary won %d times and John won %d times\n", mary, john);
    }
    return 0;
}
