#include <stdio.h>
int main () {
    int i;
    char cpf[14];
    scanf("%s", cpf);
    for(i=0; i<3; i++) {
        printf("%c%c%c\n", cpf[i*4], cpf[(i*4)+1], cpf[(i*4)+2]);
    }
    printf("%c%c\n", cpf[12], cpf[13]);
    return 0;
}
