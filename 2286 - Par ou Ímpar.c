#include <stdio.h>
int main () {
	int i, numero, teste1, teste2, contagem, soma;
	char nome1[100], nome2[100];
	contagem = 0;
	while(1) {
		scanf("%d\n", &numero);
		contagem++;
		if(numero==0) {
			break;
		}
		scanf("%s\n", nome1);
		scanf("%s\n", nome2);
		printf("Teste %d\n", contagem);
		for(i=1; i<=numero; i++) {
			scanf("%d %d\n", &teste1, &teste2);
			soma = teste1+teste2;
			if(soma%2==0) {
				printf("%s\n", nome1);
			}
			else {
				printf("%s\n", nome2);
			}
		}
		printf("\n");
	}
	return 0;
}
