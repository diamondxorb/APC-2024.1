#include <stdio.h>
#include <string.h>

int main () {
  int i, j, numero, tamanho, failuee;
  char placa[100];
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    failuee = 0;
    scanf(" %[^\n]", placa);
    tamanho = strlen(placa);
    if(tamanho!=8) {
      printf("FAILURE\n");
      continue;
    }
    else {
      for(j=0; j<3; j++) {
        if(placa[j]<'A' || placa[j]>'Z') {
          failuee = 1;
          break;
        }
      }
      if(placa[3]!='-') {
        printf("FAILURE\n");
        continue;
      }
      else {
        for(j=4; j<8; j++) {
          if(placa[j]<'0' || placa[j]>'9') {
            failuee = 1;
            break;
          }
        }
        if(failuee==0) {
          if(placa[7]=='1' || placa[7]=='2') {
            printf("MONDAY\n");
          }
          else if(placa[7]=='3' || placa[7]=='4') {
            printf("TUESDAY\n");
          }
          else if(placa[7]=='5' || placa[7]=='6') {
            printf("WEDNESDAY\n");
          }
          else if(placa[7]=='7' || placa[7]=='8') {
            printf("THURSDAY\n");
          }
          else {
            printf("FRIDAY\n");
          }
        }
      }
    }
    if(failuee==1) {
      printf("FAILURE\n");
    }
    memset(placa, 0, sizeof(placa));
  }
  return 0;
}
