#include <stdio.h>
int main () {
    int i, cha, cha_verdadeiro, contagem;
    contagem = 0;
    scanf("%d\n", &cha_verdadeiro);
    for(i=1; i<6; i++) {
        scanf("%d ", &cha);
        if(cha==cha_verdadeiro) {
            contagem++;
        }
    }
    printf("%d\n", contagem);
    return 0;
}
