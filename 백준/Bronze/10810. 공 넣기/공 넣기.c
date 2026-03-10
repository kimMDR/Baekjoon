#include <stdio.h>
int main() {
    int x, y, i, temp, j, k;
    int arr[101] = {0};

    scanf("%d %d", &x, &y);
    for(int a = 0; a < y; a++) {
    i = 0, j = 0, k = 0;
    scanf("%d %d %d", &i, &j, &k);
        for(; i <= j; i++) {
            arr[i] = k;
        }
    }
    for(int z = 0; z < x; z++) {
        printf("%d ", arr[z+1]);
    }
}
