#include <stdio.h>
#include <stdlib.h>
int main () {
    int i, x, y, numero, soma;
    scanf("%d\n", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%d %d\n", &x, &y);
        soma = 0;
        if(y>x) {
            while(x < (y-1)) {
                x++;
                if(x%2 != 0) {
                    soma+=x;
                }
            }
        }
        
        else if(x>y) {
            while(y < (x-1)) {
                y++;
                if(y%2 != 0) {
                    soma+=y;
                }
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}
