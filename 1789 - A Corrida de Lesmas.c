#include <stdio.h>
int main () {
    int i, numero, rapido, velocidade[500];
    while(scanf("%d", &numero) != EOF) {
        scanf("%d ", &velocidade[0]);
        rapido = velocidade[0];
        for(i=1; i<numero; i++) {
            scanf("%d", &velocidade[i]);
            if(velocidade[i]>rapido) {
                rapido = velocidade[i];
            }
        }
        if(rapido<10) {
            printf("1\n");
        }
        else if(rapido>=10 && rapido<20) {
            printf("2\n");
        }
        else {
            printf("3\n");
        }
    }
    return 0;
}
