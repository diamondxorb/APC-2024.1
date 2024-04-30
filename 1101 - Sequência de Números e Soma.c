#include <stdio.h>
#include <stdlib.h>
int main () {
    int i, j, soma, contagem, m, n, quant;
    do { 
        scanf("%d %d\n", &m, &n);
        quant = (abs(m-n)+1);
        soma = 0;
        if((m<=0) || (n<=0)) {
            break;
        }
        if(m>n) {
            for(i=1; i<=quant; i++) {
                printf("%d ", n);
                soma+=n;
                n++;
            }
        }
        else if(n>m) {
            for(j=1; j<=quant; j++) {
                printf("%d ", m);
                soma+=m;
                m++;
            }
        }
        if((m!=0) && (n!=0)) {
            printf("Sum=%d\n", soma);
        }
    } while((m != 0) && (n != 0));
    return 0;
}
