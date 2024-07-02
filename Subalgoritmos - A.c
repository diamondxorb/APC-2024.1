#include <stdio.h>

double coef(int num_x0, int num_y0, int num_x1, int num_y1) {
    double coeficiente;
    coeficiente = (num_y1-num_y0)/(num_x1-num_x0);
    return coeficiente;
}

int main () {
    int x0, y0, x1, y1;
    scanf("%lf %lf %lf %lf", &x0, &y0, &x1, &y1);
    printf("%.2lf\n", coef());
    return 0;
}
