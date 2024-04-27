#include <stdio.h>
int main () {
    int tempo_gasto, veloc_media;
    double quant_litros;
    scanf("%d\n", &tempo_gasto);
    scanf("%d\n", &veloc_media);
    quant_litros = tempo_gasto*veloc_media/12.0;
    printf("%.3lf\n", quant_litros);
    return 0;
}
