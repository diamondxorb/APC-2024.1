#include <stdio.h>
int main () {
    int nota;
    scanf("%d\n", &nota);
    if(nota==0) {
        printf("E\n");
    }
    else if((nota>0) && (nota<=35)) {
        printf("D\n");
    }
    else if((nota>35) && (nota<=60)) {
        printf("C\n");
    }
    else if((nota>60) && (nota<=85)) {
        printf("B\n");
    }
    else {
        printf("A\n");
    }
    return 0;
}
