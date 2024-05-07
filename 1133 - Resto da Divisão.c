#include <stdio.h>
int main () {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(y>x) {
        while(1) {
            x++;
            if(x==y) {
                break;
            }
            if(x%5==2 || x%5==3) {
                printf("%d\n", x);
            }
        }
    }
    else if(x>y) {
        while(1) {
            y++;
            if(x==y) {
                break;
            }
            if(y%5==2 || y%5==3) {
                printf("%d\n", y);
            }
        }
    }
    return 0;
}
