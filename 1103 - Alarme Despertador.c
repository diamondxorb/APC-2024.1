#include <stdio.h>
int main () {
    int hora1, min1, hora2, min2, tempo1, tempo2, sono;
    while(1) {
        scanf("%d %d %d %d\n", &hora1, &min1, &hora2, &min2);
        tempo1 = (hora1*60) + min1;
        tempo2 = (hora2*60) + min2;
        sono = tempo2-tempo1;
        if(hora1==0 && min1==0 && hora2==0 && min2==0) {
            break;
        }
        if(sono<=0) {
            sono = sono + 1440;
        }
        printf("%d\n", sono);
    }
    return 0;
}
