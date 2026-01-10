#include  <stdio.h>
int main() {
    char str[] = "long ";
    int N;
    scanf("%d", &N);
    for(int i=0; i < N/4; i++) {
        printf("%s", str);
    }
    printf("int");
    return 0;
}