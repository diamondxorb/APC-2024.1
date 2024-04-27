#include <stdio.h>
int main () {
    int distancia;
    0 <= distancia <= 2000;
    scanf("%d\n", &distancia);
    if(distancia <= 800) {
        printf("1\n");
    }
    else if((distancia > 800) && (distancia <= 1400)) {
        printf("2\n");
    }
    else if((distancia > 1400) && (distancia <= 2000)) {
        printf("3\n");
    }
    return 0;
}
