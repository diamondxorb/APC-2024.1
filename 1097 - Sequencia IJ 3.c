#include <stdio.h>
int main () {
    int i, cont1, cont2, cont3, cont4;
    cont1 = 1;
    cont2 = 7;
    cont3 = 6;
    cont4 = 5;
    for(i=1; i<=5; i++) {
        printf("I=%d J=%d\n", cont1, cont2);
        printf("I=%d J=%d\n", cont1, cont3);
        printf("I=%d J=%d\n", cont1, cont4);
        cont1+=2;
        cont2+=2;
        cont3+=2;
        cont4+=2;
    }
    return 0;
}
