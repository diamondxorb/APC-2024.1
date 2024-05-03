#include <stdio.h>
#include <string.h>
int main () {
    int i, numero, vencedor, contagem;
    char sheldon[100], raj[100];
    contagem = 0;
    scanf("%d\n", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%s %s\n", sheldon, raj);
        contagem++;
        if((strcmp(sheldon, "tesoura")==0)) {
            if((strcmp(raj, "papel")==0) || (strcmp(raj, "lagarto")==0)) {
                vencedor = 1;
            }
            else if((strcmp(raj, "pedra")==0) || (strcmp(raj, "Spock")==0)) {
                vencedor = 2;
            }
            else {
                vencedor = 3;
            }
        }
        else if((strcmp(sheldon, "pedra")==0)) {
            if((strcmp(raj, "tesoura")==0) || (strcmp(raj, "lagarto")==0)) {
                vencedor = 1;
            }
            else if((strcmp(raj, "papel")==0) || (strcmp(raj, "Spock")==0)) {
                vencedor = 2;
            }
            else {
                vencedor = 3;
            }
        }
        else if((strcmp(sheldon, "papel")==0)) {
            if((strcmp(raj, "pedra")==0) || (strcmp(raj, "Spock")==0)) {
                vencedor = 1;
            }
            else if((strcmp(raj, "lagarto")==0) || (strcmp(raj, "tesoura")==0)) {
                vencedor = 2;
            }
            else {
                vencedor = 3;
            }
        }
        else if((strcmp(sheldon, "lagarto")==0)) {
            if((strcmp(raj, "Spock")==0) || (strcmp(raj, "papel")==0)) {
                vencedor = 1;
            }
            else if((strcmp(raj, "tesoura")==0) || (strcmp(raj, "pedra")==0)) {
                vencedor = 2;
            }
            else {
                vencedor = 3;
            }
        }
        else {
            if((strcmp(raj, "tesoura")==0) || (strcmp(raj, "pedra")==0)) {
                vencedor = 1;
            }
            else if((strcmp(raj, "lagarto")==0) || (strcmp(raj, "papel")==0)) {
                vencedor = 2;
            }
            else {
                vencedor = 3;
            }
        }
        printf("Caso #%d: ", contagem);
        if(vencedor==1) {
            printf("Bazinga!\n");
        }
        else if(vencedor==2) {
            printf("Raj trapaceou!\n");
        }
        else {
            printf("De novo!\n");
        }
    }
    return 0;
}
