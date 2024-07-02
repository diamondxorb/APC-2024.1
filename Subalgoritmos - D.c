#include <stdio.h>

double x, y;

void LePonto() {
    scanf("%lf %lf", &x, &y);
}

int main () {
    double x0, y0, x1, y1, coeficiente;
    LePonto();
    x0 = x;
    y0 = y;
    LePonto();
    x1 = x;
    y1 = y;
    if(x1==x0) {
        printf("Nao eh possivel determinar o coeficiente angular.\n");
    }
    else {
        coeficiente = (y1-y0)/(x1-x0);
        printf("%.2lf\n", coeficiente);
    }
    return 0;
}
