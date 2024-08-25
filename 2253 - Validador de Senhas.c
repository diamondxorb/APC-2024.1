#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
  int i, especiais, minuscula, maiuscula, tamanho;
  char senha[100];
  while(scanf(" %[^\n]", senha)!=EOF) {
    maiuscula = 0;
    minuscula = 0;
    especiais = 0;
    tamanho = strlen(senha);
    if(tamanho<6 || tamanho>32) {
      printf("Senha invalida.\n");
      continue;
    }
    else {
      for(i=0; i<tamanho; i++) {
        if(isupper(senha[i])!=0) {
          maiuscula++;
        }
        else if(islower(senha[i])!=0) {
          minuscula++;
        }
        else if((senha[i]>=32 && senha[i]<='/') || senha[i]>58 && senha[i]>40) {
          especiais++;
        }
      }
      if(maiuscula!=0 && minuscula!=0 && especiais==0) {
        printf("Senha valida.\n");
      }
      else {
        printf("Senha invalida.\n");
      }
    }
    memset(senha, 0, sizeof(senha));
  }
  return 0;
}
