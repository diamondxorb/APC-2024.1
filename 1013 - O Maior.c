#include <stdio.h>
#include <stdlib.h>
int main () {
    int a, b, c, maior_ab, maior_ac;
    scanf("%d %d %d\n", &a, &b, &c);
    maior_ab = (a+b+abs(a-b))/2;
    maior_ac = (maior_ab+c+abs(maior_ab-c))/2;
    printf("%d eh o maior\n", maior_ac);
    return 0;
}
