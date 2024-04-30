#include <stdio.h>
int main () {
	int i, x, y, soma;
	scanf("%d\n", &x);
	scanf("%d\n", &y);
	soma = 0;
	if(x>y) {
		if(y%13!=0) {
		soma = y + soma;
		}
		while(x!=y) {
			y++;
			if(y%13!=0) {
				soma+=y;
			}
		}
	}
	else if(y>x) {
		if(x%13!=0) {
		soma = x + soma;
		}
		while(y!=x) {
			x++;
			if(x%13!=0) {
				soma+=x;
			}
		}
	}
	printf("%d\n", soma);
	return 0;
}
