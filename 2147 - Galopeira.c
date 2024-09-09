#include <stdio.h>
#include <string.h>

int main () {
  int i, numero;
  double tamanho;
  char galopeira[10000];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%s", galopeira);
    tamanho = strlen(galopeira)*0.01;
    printf("%.2lf\n", tamanho);
    memset(galopeira, '\0', sizeof(galopeira));
  }
  return 0;
}
