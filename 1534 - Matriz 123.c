#include <stdio.h>

int main () {
    int i, j, tamanho, numero;
    while(scanf("%d", &tamanho) != EOF) {
        for(i=0; i<tamanho; i++) {
            for(j=0; j<tamanho; j++) {
                if(i==j) {
                    if(tamanho%2!=0 && i==tamanho/2) {
                        numero = 2;
                    }
                    else {
                        numero = 1;
                    }
                }
                else if((i+j)==(tamanho-1)) {
                    numero = 2;
                }
                else {
                    numero = 3;
                }
                printf("%d", numero);
            }
            printf("\n");
        }
    }
    return 0;
}
