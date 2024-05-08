#include <stdio.h>
int main () {
    int filho, filha, total;
    while(1) {
        scanf("%d %d", &filho, &filha);
        total = 0;
        if(filho==0 && filha==0) {
            break;
        }
        total = filho+filha;
        printf("%d\n", total);
    }
    return 0;
}
