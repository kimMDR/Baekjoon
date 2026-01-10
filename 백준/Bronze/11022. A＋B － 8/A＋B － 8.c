#include  <stdio.h>
int main() {
    int T, A, B;
    scanf("%d", &T);
    for(int i=1; i <= T; i++) {
        scanf("%d %d", &A, &B);
        printf("Case #%d: ", i);
        printf("%d + %d = %d\n", A, B, A+B);
    }
    return 0;
}