#include <stdio.h>
int main () {
    int cu, boi, bot, map, lara, total;
    scanf("%d\n", &cu);
    scanf("%d\n", &boi);
    scanf("%d\n", &bot);
    scanf("%d\n", &map);
    scanf("%d\n", &lara);
    total = (cu*300)+(boi*1500)+(bot*600)+(map*1000)+(lara*150)+225;
    printf("%d\n", total);
    return 0;
}
