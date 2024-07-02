#include <stdio.h>

int potencia(int num_x, int num_y) {
    int pot, i;
    pot = num_x;
    for(i=1; i<num_y; i++) {
        pot *= num_x;
    }
    return pot;
}

int main () {
    int x, y;
    scanf("%d %d", &x, &y);
    if(y<0){
        printf("Ainda não lidamos com expoentes negativos.\n");
    }
    else {
        printf("%d\n", potencia(x, y));
    }
    return 0;
}
