#include <stdio.h>
int main () {
    int i, somaG, somaR, somaS, somaC, numero, contagem, testes;
    char animal;
    double percC, percR, percS;
    somaG = 0;
    somaR = 0;
    somaS = 0;
    somaC = 0;
    scanf("%d\n", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%d %c\n", &testes, &animal);
        if(animal =='C') {
            somaC+=testes;
        }
        else if(animal == 'R') {
            somaR+=testes;
        }
        else if(animal == 'S') {
            somaS+=testes;
        }
        somaG+=testes;
    }
    percC = (somaC/(somaG*1.0))*100;
    percR = (somaR/(somaG*1.0))*100;
    percS = (somaS/(somaG*1.0))*100;
    printf("Total: %d cobaias\n", somaG);
    printf("Total de coelhos: %d\n", somaC);
    printf("Total de ratos: %d\n", somaR);
    printf("Total de sapos: %d\n", somaS);
    printf("Percentual de coelhos: %.2lf %%\n", percC);
    printf("Percentual de ratos: %.2lf %%\n", percR);
    printf("Percentual de sapos: %.2lf %%\n", percS);
    return 0;
}
