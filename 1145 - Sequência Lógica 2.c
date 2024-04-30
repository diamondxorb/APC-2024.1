#include <stdio.h>
int main () {
    int i, x, y, contagem;
    contagem = 0;
    scanf("%d %d\n", &x, &y);
    for(i=1; i<=y; i++) {
        contagem++;
        printf("%d", contagem);
        if(contagem%x==0) {
            printf("\n");
        }
        else {
            printf(" ");
        }
    }
    return 0;
}
