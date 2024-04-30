#include <stdio.h>
int main () {
    int gasolina, cont1, cont2, cont3;
    scanf("%d\n", &gasolina);
    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    while(gasolina!=4) {
        scanf("%d\n", &gasolina);
        if(gasolina==1) {
            cont1++;
        }
        else if(gasolina==2) {
            cont2++;
        }
        else if(gasolina==3) {
            cont3++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", cont1);
    printf("Gasolina: %d\n", cont2);
    printf("Diesel: %d\n", cont3);
    return 0;
}
