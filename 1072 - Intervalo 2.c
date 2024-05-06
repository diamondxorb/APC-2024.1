#include <stdio.h>
int main () {
    int i, numero, num2, cont1, cont2;
    cont1 = 0;
    cont2 = 0;
    scanf("%d", &numero);
    for(i=1; i<=numero; i++) {
        scanf("%d", &num2);
        if(num2>=10 && num2<=20) {
            cont1++;
        }
        else {
            cont2++;
        }
    }
    printf("%d in\n", cont1);
    printf("%d out\n", cont2);
    return 0;
}
