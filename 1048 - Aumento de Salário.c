#include <stdio.h>
int main () {
    int perc2;
    double salario_antigo, novo_salario, reaj, perc;
    scanf("%lf", &salario_antigo);
    if(salario_antigo<=400.00) {
        perc = 1.15;
        perc2 = 15;
    }
    else if(salario_antigo>400.00 && salario_antigo<=800.00) {
        perc = 1.12;
        perc2 = 12;
    }
    else if(salario_antigo>800.00 && salario_antigo<=1200.00) {
        perc = 1.10;
        perc2 = 10;
    }
    else if(salario_antigo>1200.00 && salario_antigo<=2000.00) {
        perc = 1.07;
        perc2 = 7;
    }
    else {
        perc = 1.04;
        perc2 = 4;
    }
    novo_salario = salario_antigo*perc;
    reaj = novo_salario-salario_antigo;
    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reaj);
    printf("Em percentual: %d %%\n", perc2);
    return 0;
}
