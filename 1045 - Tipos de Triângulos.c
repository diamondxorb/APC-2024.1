#include <stdio.h>
int main () {
    double a, b, c;
    scanf("%lf %lf %lf\n", &a, &b, &c);
    a>0 && b>0 && c>0;
    if((a >= b) && (a >= c)) {
        if(a<b+c) {
            if((a*a) == (b*b) + (c*c)) {
            printf("TRIANGULO RETANGULO\n");
         }
            else if((a*a) > (b*b) + (c*c)) {
            printf("TRIANGULO OBTUSANGULO\n");
            }
            else if((a*a) < (b*b) + (c*c)) {
            printf("TRIANGULO ACUTANGULO\n");
            }
        }
        else if(a >= (b+c)) {
            printf("NAO FORMA TRIANGULO\n");
        }
    }
    else if((b >= a) && (b >= c)) {
        if(b<a+c) {
            if((b*b) == (a*a) + (c*c)) {
            printf("TRIANGULO RETANGULO\n");
         }
            else if((b*b) > (a*a) + (c*c)) {
            printf("TRIANGULO OBTUSANGULO\n");
            }
            else if((b*b) < (a*a) + (c*c)) {
            printf("TRIANGULO ACUTANGULO\n");
            }
        }
        else if(b >= (a+c)) {
            printf("NAO FORMA TRIANGULO\n");
        }
    }
    else if((c >= a) && (c >= b)) {
        if(c<a+b) {
            if((c*c) == (b*b) + (a*a)) {
            printf("TRIANGULO RETANGULO\n");
         }
            else if((c*c) > (b*b) + (a*a)) {
            printf("TRIANGULO OBTUSANGULO\n");
            }
            else if((c*c) < (b*b) + (a*a)) {
            printf("TRIANGULO ACUTANGULO\n");
            }
        }
        else if(c >= (b+a)) {
            printf("NAO FORMA TRIANGULO\n");
        }
    }
    if((a==b) && (a==c) && (b==c)) {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a == b) != (a == c) != (b ==c)) {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
