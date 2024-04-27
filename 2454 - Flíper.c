#include <stdio.h>
int main () {
    int p, r;
    (p == 0) || (p == 1);
    (r == 0) || (r == 1);
    scanf("%d %d\n", &p, &r);
    if(p==1) {
        if(r==1) {
            printf("A\n");
        } 
        else if(r==0) {
            printf("B\n");
        }
    }
    else if(p==0) {
        printf("C\n");
    }
    return 0;
}
