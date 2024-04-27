#include <stdio.h>
int main () {
    double a, b, c, perimetro, area;
    scanf("%lf %lf %lf\n", &a, &b, &c);
    perimetro = a + b + c;
    area = (a+b)*c/2.0;
    if((a >= b) && (a >= c)) {
        if(a<b+c) {
            printf("Perimetro = %.1lf\n", perimetro);
        }
        else if(a >= (c+b)) {
            printf("Area = %.1lf\n", area);
        }
    }
    else if((b >= a) && (b >= c)) {
        if(b<a+c) {
            printf("Perimetro = %.1lf\n", perimetro);
        }
        else if(b >= (a+c)) {
            printf("Area = %.1lf\n", area);
        }
    }
    else if((c >= a) && (c >= b)) {
        if(c<a+b) {
            printf("Perimetro = %.1lf\n", perimetro);
        }
        else if(c >= (a+b)) {
            printf("Area = %.1lf\n", area);
        }
    }
    return 0;
}
