#include <stdio.h>
int main () {
    int dist_total;
    double comb_total, consumo_medio;
    scanf("%d\n", &dist_total);
    scanf("%lf\n", &comb_total);
    consumo_medio = dist_total/comb_total;
    printf("%.3lf km/l\n", consumo_medio);
    return 0;
}
