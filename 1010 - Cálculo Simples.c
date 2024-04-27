#include <stdio.h>
int main () {
    int cod_1, num_1, cod_2, num_2;
    double valor_1, valor_2, total;
    scanf("%d %d %lf\n", &cod_1, &num_1, &valor_1);
    scanf("%d %d %lf\n", &cod_2, &num_2, &valor_2);
    total = num_1*valor_1 + num_2*valor_2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
