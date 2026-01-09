#include <stdio.h>
int main() {
    unsigned int X, N, a, b, Q=0;
    char str[] = "Yes";
    char str2[] = "No";
    scanf("%d", &X);
    scanf("%d", &N);
    for(int i=0; i < N; i++) {
        scanf("%d %d", &a, &b);
        Q += a*b;
    }
    if(X == Q) {
        printf("%s", str);
    }
    else {
        printf("%s", str2);
    }
    return 0;
}