#include <stdio.h>
int main () {
    int i, numero, cont1;
    scanf("%d", &numero);
    cont1 = 1;
    for(i=1; i<=numero; i++) {
        printf("%d %d %d\n", cont1, cont1*cont1, cont1*cont1*cont1);
        cont1++;
    }
    return 0;
}
