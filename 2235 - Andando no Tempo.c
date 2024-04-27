#include <stdio.h>
int main () {
    int a, b, c;
    scanf("%d %d %d\n", &a, &b, &c);
    (1 <= a <= 1000) && (1 <= b <= 1000) && (1 <= c <= 1000);
    if((a == b) || (a == c) || (b == c)) {
        printf("S\n");
    }
    else if((a==b+c) || (b==a+c) || (c==a+b)) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    return 0;
}
