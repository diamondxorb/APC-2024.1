#include <stdio.h>
int main () {
    int senha;
    scanf("%d\n", &senha);
    while(senha!=2002) {
        printf("Senha Invalida\n");
        scanf("%d\n", &senha);
    }
    printf("Acesso Permitido\n");
    return 0;
}
