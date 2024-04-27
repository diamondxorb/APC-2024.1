#include <stdio.h>
int main () {
    char nome[30];
    double salario_fixo, total_vendas, total;
    scanf("%s\n", nome);
    scanf("%lf\n", &salario_fixo);
    scanf("%lf\n", &total_vendas);
    total=salario_fixo+total_vendas*0.15;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
