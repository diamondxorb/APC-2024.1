#include <stdio.h>
int main () {
    int v1, e1, sg1, v2, e2, sg2, soma_pontos1, soma_pontos2;
    scanf("%d %d %d %d %d %d\n", &v1, &e1, &sg1, &v2, &e2, &sg2);
    soma_pontos1 = (v1*3) + e1;
    soma_pontos2 = (v2*3) + e2;
    if(soma_pontos1 > soma_pontos2) {
        printf("C\n");
    }
    else if(soma_pontos2 > soma_pontos1) {
        printf("F\n");
    }
    else if(soma_pontos1 == soma_pontos2) {
    	if(sg1 > sg2) {
    		printf("C\n");
    	}
	else if(sg2 > sg1) {
		printf("F\n");
	}
	else if(sg1 == sg2) {
		printf("=\n");
	}
    }
    return 0;
}
