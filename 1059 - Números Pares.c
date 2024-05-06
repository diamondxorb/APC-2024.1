#include <stdio.h>
int main () {
    int i, contagem;
    contagem = 0;
    for(i=1; i<=50; i++) {
        contagem+=2;
        printf("%d\n", contagem);
    }
    return 0;
}
