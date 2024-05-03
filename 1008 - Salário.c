#include <stdio.h>
int main () {
    int numero, horas;
    double valor_hora, salario;
    scanf("%d\n", &numero);
    scanf("%d\n", &horas);
    scanf("%lf\n", &valor_hora);
    salario = valor_hora*horas;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
