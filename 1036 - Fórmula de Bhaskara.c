#include <stdio.h>
#include <math.h>
int main () {
    double a, b, c, delta, r1, r2;
    scanf("%lf %lf %lf\n", &a, &b, &c);
    delta = b*b - (4*a*c);
    r1 = (-b + sqrt(delta))/(2*a);
    r2 = (-b - sqrt(delta))/(2*a);
    if((2*a == 0) || (delta < 0)) {
        printf("Impossivel calcular\n");
    }
    else {
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    return 0;
}
