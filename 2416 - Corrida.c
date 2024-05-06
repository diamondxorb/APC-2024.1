#include <stdio.h>
int main () {
    int metros, pista, termino;
    scanf("%d %d", &metros, &pista);
    termino = metros - ((metros/pista)*pista);
    printf("%d\n", termino);
    return 0;
}
