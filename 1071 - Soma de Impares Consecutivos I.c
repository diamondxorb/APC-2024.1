#include <stdio.h>
int main () {
    int x, y, contagem, soma;
    scanf("%d", &x);
    scanf("%d", &y);
    soma = 0;
    if(x>y) {
        while(1) {
            y++;
            if(y==x) {
                break;
            }
            if(y%2!=0) {
                soma+=y;
            }
        }
    }
    else if(y>x) {
        while(1) {
            x++;
            if(x==y) {
                break;
            }
            if(x%2!=0) {
                soma+=x;
            }
        }
    }
    printf("%d\n", soma);
    return 0;
}
