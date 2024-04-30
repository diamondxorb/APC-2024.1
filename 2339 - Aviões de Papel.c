#include <stdio.h>
int main () {
    int competidores, folhas_total, folhas_pessoa;
    scanf("%d %d %d\n", &competidores, &folhas_total, &folhas_pessoa);
    if(folhas_total<(competidores*folhas_pessoa)) {
        printf("N\n");
    }
    else {
        printf("S\n");
    }
    return 0;
}
