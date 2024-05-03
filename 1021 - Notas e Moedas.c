#include <stdio.h>
int main () {
    int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, moeda_1, moeda_50, moeda_25, moeda_10, moeda_5, moeda_01;
    double valor;
    scanf("%lf", &valor);
    nota_100 = valor/100;
    nota_50 = (valor-nota_100*100)/50;
    nota_20 = ((valor-nota_100*100)-nota_50*50)/20;
    nota_10 = (((valor-nota_100*100)-nota_50*50)-nota_20*20)/10;
    nota_5 = ((((valor-nota_100*100)-nota_50*50)-nota_20*20)-nota_10*10)/5;
    nota_2 = (((((valor-nota_100*100)-nota_50*50)-nota_20*20)-nota_10*10)-nota_5*5)/2;
    moeda_1 = ((((((valor-nota_100*100)-nota_50*50)-nota_20*20)-nota_10*10)-nota_5*5)-nota_2*2)/1;
    moeda_50 = (((((((valor-nota_100*100)-nota_50*50)-nota_20*20)-nota_10*10)-nota_5*5)-nota_2*2)-moeda_1*1)/0.5;
    moeda_25 = ((((((((valor-nota_100*100)-nota_50*50)-nota_20*20)-nota_10*10)-nota_5*5)-nota_2*2)-moeda_1*1)-moeda_50*0.5)/0.25;
    moeda_10 = (((((((((valor-nota_100*100)-nota_50*50)-nota_20*20)-nota_10*10)-nota_5*5)-nota_2*2)-moeda_1*1)-moeda_50*0.5)-moeda_25*0.25)/0.1;
    moeda_5 = ((((((((((valor-nota_100*100)-nota_50*50)-nota_20*20)-nota_10*10)-nota_5*5)-nota_2*2)-moeda_1*1)-moeda_50*0.5)-moeda_25*0.25)-moeda_10*0.1)/0.05;
    moeda_01 = (((((((((((valor-nota_100*100)-nota_50*50)-nota_20*20)-nota_10*10)-nota_5*5)-nota_2*2)-moeda_1*1)-moeda_50*0.5)-moeda_25*0.25)-moeda_10*0.1)-moeda_5*0.05)/0.01;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota_100);
    printf("%d nota(s) de R$ 50.00\n", nota_50);
    printf("%d nota(s) de R$ 20.00\n", nota_20);
    printf("%d nota(s) de R$ 10.00\n", nota_10);
    printf("%d nota(s) de R$ 5.00\n", nota_5);
    printf("%d nota(s) de R$ 2.00\n", nota_2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda_1);
    printf("%d moeda(s) de R$ 0.50\n", moeda_50);
    printf("%d moeda(s) de R$ 0.25\n", moeda_25);
    printf("%d moeda(s) de R$ 0.10\n", moeda_10);
    printf("%d moeda(s) de R$ 0.05\n", moeda_5);
    printf("%d moeda(s) de R$ 0.01\n", moeda_01);
    return 0;
}
