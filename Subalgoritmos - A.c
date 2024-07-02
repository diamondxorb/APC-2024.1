#include <stdio.h>

double coef() {
    double x1, y1, x2, y2, coeficiente;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    coeficiente = (y2-y1)/(x2-x1);
    return coeficiente;
}

int main () {
    printf("%.2lf\n", coef());
    return 0;
}
