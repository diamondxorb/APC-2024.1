#include <stdio.h>
#include <string.h>
int main () {
    char vertebra[12], tipo[8], comida[10];
    scanf("%s\n", vertebra);
    scanf("%s\n", tipo);
    scanf("%s\n", comida);
    if((strcmp(vertebra, "vertebrado")==0)) {
        if((strcmp(tipo, "ave")==0)) {
            if((strcmp(comida, "carnivoro")==0)) {
                printf("aguia\n");
            }
            else {
                printf("pomba\n");
            }
        }
        else {
            if((strcmp(comida, "onivoro")==0)) {
                printf("homem\n");
            }
            else {
                printf("vaca\n");
            }
        }
    }
    else {
        if((strcmp(tipo, "inseto")==0)) {
            if((strcmp(comida, "hematofago")==0)) {
                printf("pulga\n");
            }
            else {
                printf("lagarta\n");
            }
        }
        else {
            if((strcmp(comida, "hematofago")==0)) {
                printf("sanguessuga\n");
            }
            else {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
