#include <stdio.h>
int main () {
    int numero, contagem;
    contagem = 1;
    scanf("%d", &numero);
    while(1) {
        printf("%d\n", contagem);
        contagem+=2;
        if(contagem>numero) {
            break;
        }
    }
    return 0;
}
