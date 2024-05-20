#include <stdio.h>
#include <string.h>
int main () {
    int i, j, numero, deslocamento;
    char testes[50];
    scanf("%d", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%s", testes);
        scanf("%d", &deslocamento);
        for(j=0; j<strlen(testes); j++) {
            testes[j]-=deslocamento;
            if(testes[j]<'A') {
                testes[j]+=26;
            }
            printf("%c", testes[j]);
        }
        printf("\n");
    }
    return 0;
}
