#include <stdio.h>
int main () {
    int monica, filho1, filho2, filho3, mais_velho;
    scanf("%d\n", &monica);
    scanf("%d\n", &filho1);
    scanf("%d\n", &filho2);
    filho3 = monica-(filho1+filho2);
    if(filho1>filho2 && filho1>filho3) {
        mais_velho = filho1;
    }
    else if(filho2>filho1 && filho2>filho3) {
        mais_velho = filho2;
    }
    else {
        mais_velho = filho3;
    }
    printf("%d\n", mais_velho);
    return 0;
}
