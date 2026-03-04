#include <stdio.h>
int main() {
    int n;
    int arr[30] = {0};
    
    for(int i = 0; i < 30; i++) {
        scanf("%d", &n);
        arr[n-1]++;
    }

    for(int b = 0; b < 30; b++) {
        if(!arr[b]) {
            printf("%d\n", b+1);
        }
    }
}