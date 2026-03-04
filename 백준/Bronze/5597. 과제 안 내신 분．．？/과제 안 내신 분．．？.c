#include <stdio.h>
int main() {
    int n;
    int arr[30] = {0};
    
    for(int i = 0; i < 30; i++) {
        scanf("%d", &n);
        arr[n-1]++;
    }

    for(int a = 0; a < 30; a++) {
        if(!arr[a]) {
            printf("%d\n", a+1);
        }
    }

}
