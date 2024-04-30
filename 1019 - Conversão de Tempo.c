#include <stdio.h>
int main () {
    int numero, horas, minutos, segundos;
    scanf("%d\n", &numero);
    horas = numero/3600;
    minutos = (numero%3600)/60;
    segundos = (numero%3600)%60;
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}
