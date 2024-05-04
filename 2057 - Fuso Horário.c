#include <stdio.h>
int main () {
    int saida, tempo_viagem, fuso_destino, hora_local;
    scanf("%d %d %d", &saida, &tempo_viagem, &fuso_destino);
    hora_local = saida+tempo_viagem+fuso_destino;
    if(hora_local>=24) {
        hora_local = hora_local-24;
    }
    else if(hora_local<0) {
        hora_local = hora_local+24;
    }
    printf("%d\n", hora_local);
    return 0;
}
