#include <stdio.h>
#include <string.h>

int main () {
  int i, primeiro, maior;
  int sequencia[1000];
  while(1) {
    scanf("%d", &primeiro);
    if(primeiro==0) {
      break;
    }
    sequencia[0] = primeiro;
    i = 0;
    maior = 0;
    while(1) {
      if(sequencia[i]>maior) {
        maior = sequencia[i];
      }
      if(sequencia[i]==1) {
        break;
      }
      if(sequencia[i]%2==0) {
        sequencia[i+1] = sequencia[i]/2;
      }
      else {
        sequencia[i+1] = (sequencia[i]*3)+1;
      }
      i++;
    }
    printf("%d\n", maior);
    memset(sequencia, 0, sizeof(sequencia));
  }
  return 0;
}
