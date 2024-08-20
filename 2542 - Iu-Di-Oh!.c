#include <stdio.h>

int main () {
  int i, j, atributos, marcos, leonardo, escol_M, escol_L, batalha;
  while(scanf("%d", &atributos)!=EOF) {
    escol_L = 0;
    escol_M = 0;
    marcos = 0;
    leonardo = 0;
    batalha = 0;
    scanf("%d %d", &marcos, &leonardo);
    int cartas_marcos[marcos][atributos], cartas_leo[leonardo][atributos];
    for(i=0; i<marcos; i++) {
      for(j=0; j<atributos; j++) {
        scanf("%d", &cartas_marcos[i][j]);
      }
    }
    for(i=0; i<leonardo; i++) {
      for(j=0; j<atributos; j++) {
        scanf("%d", &cartas_leo[i][j]);
      }
    }
    scanf("%d %d", &escol_M, &escol_L);
    scanf("%d", &batalha);
    if(cartas_marcos[escol_M-1][batalha-1]>cartas_leo[escol_L-1][batalha-1]) {
      printf("Marcos\n");
    }
    else {
      if(cartas_leo[escol_L-1][batalha-1]==cartas_marcos[escol_M-1][batalha-1]) {
        printf("Empate\n");
      }
      else {
        printf("Leonardo\n");
      }
    }
  }
  return 0;
}
