#include <stdio.h>
int main() {
    int H, M, T;
    scanf("%d %d", &H, &M);
    scanf("%d", &T);
    M += T;
    while(M >= 60) {
        H += 1;
        M -= 60;
        if(H >= 24) {
            H -= 24;
        }
    }
    printf("%d %d", H, M);
    return 0;
}