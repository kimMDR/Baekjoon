#include  <stdio.h>
int main() {
    int x, y;
    do {
        scanf("%d %d", &x, &y);
        if(x != 0 && y != 0) {
            printf("%d\n", x + y);
        }
    }
    while(x != 0 && y != 0);
}