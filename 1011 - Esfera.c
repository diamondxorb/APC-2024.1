#include <stdio.h>
int main () {
    const double PI=3.14159;
    double raio, volume;
    scanf("%lf\n", &raio);
    volume = (4/3.0)*PI*raio*raio*raio;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
