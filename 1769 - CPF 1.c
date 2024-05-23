#include <stdio.h>
int main () {
    int i, cpf1, cpf2, cpf3, cpf4, a[11], decimo, onze;
    while(scanf("%d.%d.%d-%d", &cpf1, &cpf2, &cpf3, &cpf4) != EOF) {
        decimo = 0;
        onze = 0;
        a[0] = cpf1/100;
        a[1] = (cpf1%100)/10;
        a[2] = (cpf1%100)%10;
        a[3] = cpf2/100;
        a[4] = (cpf2%100)/10;
        a[5] = (cpf2%100)%10;
        a[6] = cpf3/100;
        a[7] = (cpf3%100)/10;
        a[8] = (cpf3%100)%10;
        a[9] = cpf4/10;
        a[10] = cpf4%10;
        for(i=0; i<9; i++) {
            decimo+=a[i]*(i+1);
            onze+=a[i]*(9-i);
        }
        decimo = decimo%11;
        onze = onze%11;
        if(decimo==10) {
            decimo = 0;
        }
        if(onze==10) {
            onze = 0;
        }
        if(decimo==a[9] && onze==a[10]) {
            printf("CPF valido\n");
        }
        else {
            printf("CPF invalido\n");
        }
    }
    return 0;
}
