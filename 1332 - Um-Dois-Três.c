#include <stdio.h>
#include <string.h>
int main () {
    int i, j, numero, num_certo;
    char valor[10];
    scanf("%d", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%s", valor);
        if(strlen(valor)==5) {
            num_certo = 3;
        }
        else if((valor[0]=='o' && valor[1]=='n') || (valor[0]=='o' && valor[2]=='e') || (valor[1]=='n' && valor[2]=='e')) {
            num_certo = 1;
        }
        else {
            num_certo = 2;
        }
        printf("%d\n", num_certo);
    }
    return 0;
}
