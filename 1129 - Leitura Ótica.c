#include <stdio.h>
int main () {
    int i, j, numero, letra, cinza, cont2;
    while(1) {
        scanf("%d\n", &numero);
        if(numero==0) {
            break;
        }
        for(i=1; i<=numero; i++) {
            cont2=0;
            for(j=1; j<=5; j++) {
                scanf("%d", &cinza);
                if(cinza<=127) {
                    cont2++;
                    letra = j;
                }
            }
            if(cont2!=1) {
                printf("*\n");
            }
            else {
                if(letra==1) {
                    printf("A\n");
                }
                else if(letra==2) {
                    printf("B\n");
                }
                else if(letra==3) {
                    printf("C\n");
                }
                else if(letra==4) {
                    printf("D\n");
                }
                else {
                    printf("E\n");
                }
            }
        }
    }
    return 0;
}
