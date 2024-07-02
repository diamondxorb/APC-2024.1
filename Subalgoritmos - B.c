#include <stdio.h>

double peso_ideal(double alt, char sex) {
    double peso;
    if(sex == 'M') {
        peso = 23*alt*alt;
    }
    else if(sex == 'F') {
        peso = 20*alt*alt;
    }
    return peso;
}

int main () {
    int i, numero;
    double altura;
    char sexo;
    scanf("%d", &numero);
    for(i=0; i<numero; i++) {
        scanf("%lf %c", &altura, &sexo);
        printf("Peso ideal: %.2lf\n", peso_ideal(altura, sexo));
    }
    return 0;
}
