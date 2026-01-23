#include  <stdio.h>
int main() {
    unsigned int x, y;
    while(scanf("%d %d", &x, &y) != EOF) {
        if(0 < x, y < 10) {
            printf("%d\n", x + y);
        }
        else {
            break;
        }
    }
}