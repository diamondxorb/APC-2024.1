#include <stdio.h>
int main () {
    int numero;
    while(scanf("%d", &numero) != EOF) {
        if(numero==0) {
            printf("vai ter copa!\n");
        }
        else {
            printf("vai ter duas!\n");
        }
    }
    return 0;
}
