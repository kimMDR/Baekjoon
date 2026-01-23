#include  <stdio.h>

int main() {
    int x, y;
    int b[10000];
    int arr[10000];
    scanf("%d %d", &x, &y);
    for(int i=0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < x; i++) {
        if(arr[i] < y) {
            b[i] = arr[i];
            printf("%d ", b[i]);
        }
    }
    return 0;
}