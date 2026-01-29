#include <stdio.h>
int main() {
    int x=0;
    scanf("%d", &x);
    int arr[x];
    for(int i=0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i=1; i < x; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    int min = arr[0];
    for(int i=1; i < x; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}