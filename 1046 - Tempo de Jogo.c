#include <stdio.h>
int main () {
    int a, b, duracao, duracao1;
    scanf("%d %d\n", &a, &b);
    duracao = (b-a) + 24;
    duracao1 = b-a;
    if(duracao > 24) {
        printf("O JOGO DUROU %d HORA(S)\n", duracao1);
    }
    else {
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    return 0;
}
