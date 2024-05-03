#include <stdio.h>
int main () {
	int agua, valor;
	scanf("%d\n", &agua);
	if(agua<=10) {
		valor = 7;
	}
	else if(agua>10 && agua<=30) {
		valor = 7+(agua-10);
	}
	else if(agua>30 && agua<=100) {
		valor = 7+20+((agua-30)*2);
	}
	else {
		valor = 7+20+140+((agua-100)*5);
	}
	printf("%d\n", valor);
	return 0;
}
