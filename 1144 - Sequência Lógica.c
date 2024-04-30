#include <stdio.h>
int main () {
	int i, numero, cont1, cont2, cont3;
	scanf("%d\n", &numero);
	for(i=1; i<=numero; i++) {
		cont1++;
		cont2++;
		cont3++;
		printf("%d %d %d\n", cont1, (cont2*cont2), (cont3*cont3*cont3));
		printf("%d %d %d\n", cont1, (cont2*cont2)+1, (cont3*cont3*cont3)+1);
	}
	return 0;
}
