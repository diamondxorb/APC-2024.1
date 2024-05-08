#include <stdio.h>
int main () {
    int a, b, c;
    char vencedor;
    while(scanf("%d %d %d", &a, &b, &c) != EOF) {
        if((a==1 && b==0 && c==0) || (a==0 && b==1 && c==1)) {
            vencedor = 'A';
        }
        else if((a==0 && b==1 && c==0) || (a==1 && b==0 && c==1)) {
            vencedor = 'B';
        }
        else if((a==0 && b==0 && c==1) || (a==1 && b==1 && c==0)) {
            vencedor = 'C';
        }
        else {
            vencedor = '*';
        }
        printf("%c\n", vencedor);
    }
    return 0;
}
