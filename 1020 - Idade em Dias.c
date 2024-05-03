#include <stdio.h>
int main () {
    int total, ano, meses, dias;
    scanf("%d", &total);
    ano = total/365;
    meses = (total%365)/30;
    dias = (total%365)%30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    return 0;
}
