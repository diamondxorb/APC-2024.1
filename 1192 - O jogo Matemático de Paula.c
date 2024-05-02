#include <stdio.h>
int main () {
    int i, numero, num1, num2, operacao;
    char letra;
    scanf("%d\n", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%d%c%d", &num1, &letra, &num2);
        if(num1==num2) {
            operacao = num1*num2;
        }
        else {
            if(letra>='A' && letra<='Z') {
                operacao = num2-num1;
            }
            else {
                operacao = num1+num2;
            }
        }
        printf("%d\n", operacao);
    }
    return 0;
}
