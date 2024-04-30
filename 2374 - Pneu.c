#include <stdio.h>
int main () {
    int pressao_d, pressao_atual, diferenca;
    scanf("%d\n", &pressao_d);
    scanf("%d\n", &pressao_atual);
    diferenca = pressao_d - pressao_atual;
    printf("%d\n", diferenca);
    return 0;
}
