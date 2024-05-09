#include <stdio.h>
int main () {
    int a, b, c, d;
    char resposta;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a<(b+c) && b<(a+c) && c<(a+b)) {
        resposta = 'S';
    }
    else if(b<(c+d) && c<(b+d) && d<(b+c)) {
        resposta = 'S';
    }
    else if(a<(b+d) && b<(a+d) && d<(a+b)) {
        resposta = 'S';
    }
    else if(a<(c+d) && c<(a+d) && d<(a+c)) {
        resposta = 'S';
    }
    else {
        resposta = 'N';
    }
    printf("%c\n", resposta);
    return 0;
}
