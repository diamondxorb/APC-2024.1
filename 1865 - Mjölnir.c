#include <stdio.h>
#include <string.h>
int main () {
    int i, numero, forca;
    char nome[100];
    scanf("%d", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%s %d", nome, &forca);
        if((strcmp(nome, "Thor")==0)) {
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
    }
    return 0;
}
