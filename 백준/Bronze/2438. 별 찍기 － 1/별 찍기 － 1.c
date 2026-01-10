#include  <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=1; i <= N; i++) {
        for(int s=0; s < i; s++) {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}