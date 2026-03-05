#include <stdio.h>
int main() {
    int x, y;
    int z = 0;
    int arr[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &x);
        arr[i] = x % 42;
    }

    for(int i=0; i < 10; i++) {
        y = 0;
        for(int j = i+1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                y++;
            }
        }
        if(y == 0) {
            z++;
        }
    }
    printf("%d", z);
}