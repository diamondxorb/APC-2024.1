#include <stdio.h>
int main () {
    int i, cont1;
    cont1 = 1;
    for(i=1; i<=5; i++) {
        printf("I=%d J=7\n", cont1);
        printf("I=%d J=6\n", cont1);
        printf("I=%d J=5\n", cont1);
        cont1+=2;
    }
    return 0;
}
