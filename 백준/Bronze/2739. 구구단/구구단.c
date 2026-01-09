#include <stdio.h>
int main() {
    int x, y;
    scanf("%d", &x);
    for(int y=1; y<10; y++) {
        printf("%d * %d = %d\n", x,  y, x*y);
    }
    return 0;
}