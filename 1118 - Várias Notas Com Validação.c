#include <stdio.h>
int main () {
    int novo;
    double nota, nota2, soma, soma2, contagem, media, media2, cont2;
    contagem = 0;
    soma = 0;
    while(1) {
        scanf("%lf", &nota);
        if(nota<0 || nota>10) {
            printf("nota invalida\n");
        }
        else {
            soma+=nota;
            contagem++;
        }
        if(contagem==2) {
            break;
        }
    }
    media = (soma/2.0);
    printf("media = %.2lf\n", media);
    while(1) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novo);
        cont2 = 0;
        soma2 = 0;
        if(novo==2) {
            break;
        }
        else if(novo==1) {
            while(1) {
                scanf("%lf", &nota2);
                if(nota2<0 || nota2>10) {
                    printf("nota invalida\n");
                }
                else {
                    soma2+=nota2;
                    cont2++;
                }
                if(cont2==2) {
                    break;
                }
            }
            media2 = (soma2/2.0);
            printf("media = %.2lf\n", media2);
        }
    }
    return 0;
}
