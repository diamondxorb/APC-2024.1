#include <stdio.h>
int main () {
    int novo_grenal, gol_inter, gol_gremio, cont_i, cont_g, cont_emp, contagem;
    cont_i = 0;
    cont_g = 0;
    cont_emp = 0;
    contagem = 0;
    while(1) {
        scanf("%d %d\n", &gol_inter, &gol_gremio);
        contagem++;
        if(gol_inter>gol_gremio) {
            cont_i++;
        }
        else if(gol_gremio>gol_inter) {
            cont_g++;
        }
        else {
            cont_emp++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d\n", &novo_grenal);
        if(novo_grenal==2) {
            break;
        }
    }
    printf("%d grenais\n", contagem);
    printf("Inter:%d\n", cont_i);
    printf("Gremio:%d\n", cont_g);
    printf("Empates:%d\n", cont_emp);
    if(cont_i>cont_g) {
        printf("Inter venceu mais\n");
    }
    else if(cont_g>cont_i) {
        printf("Gremio venceu mais\n");
    }
    else {
        printf("Nao houve vencedor\n");
    }
    return 0;
}
