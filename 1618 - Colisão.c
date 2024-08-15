#include <stdio.h>

int main () {
  int i, numero, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
  scanf("%d", &numero);
  for(i=0; i<numero; i++) {
    scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);
    if(rx<ax || ry<ay || rx>cx || ry>cy) {
      printf("0\n");
    }
    else {
      printf("1\n");
    }
  }
  return 0;
}
