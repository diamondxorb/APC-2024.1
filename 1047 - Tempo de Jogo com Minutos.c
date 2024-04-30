#include <stdio.h>
int main () {
    int h1, m1, h2, m2, tempo1, tempo2, total, horas, minutos;
    scanf("%d %d %d %d\n", &h1, &m1, &h2, &m2);
    tempo1 = (h1*60) + m1;
    tempo2 = (h2*60) + m2;
    total = tempo2-tempo1;
    if(total<0) {
        total=total+(24*60);
    }
    horas = total/60;
    minutos = total%60;
    if((h1==h2) && (m1==m2)) {
        horas = 24;
        minutos = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;
}
