#include <stdio.h>
int main() {

    int a;
    int arr[9];

    for (a = 0; a < 9; a++) {
        scanf("%d", &arr[a]);
    }
 
    int max = 0;
    int c;
    for (int i = 0; i <= 8; i++) {
        if (max < arr[i]) {
            max = arr[i];
            c = i+1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", c);
}