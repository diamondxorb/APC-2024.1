#include <stdio.h>
int main () {
    int i, j_numero, i_numero;
    j_numero = 60;
    i_numero = 1;
    printf("I=1 J=60\n");
    for(i=1; i<13; i++) {
        j_numero-=5;
        i_numero+=3;
        printf("I=%d J=%d\n", i_numero, j_numero);
    }
    return 0;
}
