#include <stdio.h>
int main() {
    int temp;
    int N, M;
    int arr[101];

    scanf("%d %d", &N, &M);
    for(int x=0; x < N; x++) {
        arr[x] = x + 1;
    }

    for(int y=0; y < M; y++) {
        int i, j = 0;
        scanf("%d %d", &i, &j);
        for(i; i < j; i++) {
            temp = arr[i-1];
            arr[i-1] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    for(int t=0; t < N; t++) {
    printf("%d ", arr[t]);
    }
}