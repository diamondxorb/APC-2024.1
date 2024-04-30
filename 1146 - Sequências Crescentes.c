#include <stdio.h>
int main () {
    int i, numero, x;
    scanf("%d\n", &x);
    numero = 1;
    for(i=1; i<x; i++) {
        printf("%d ", numero);
        numero++;
    }
    printf("%d\n", x);
    while(x!=0) {
        scanf("%d\n", &x);
        numero = 1;
        for(i=1; i<x; i++) {
            printf("%d ", numero);
            numero++;
        }
        if(x!=0) {
            printf("%d\n", x);
        }
    }
    return 0;
}
