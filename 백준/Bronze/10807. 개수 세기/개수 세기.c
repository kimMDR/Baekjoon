#include  <stdio.h>

int main() {
    int x, y;
    int a=0;
    scanf("%d", &x);
    int arr[100];
    for(int i=0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &y);
    for(int i = 0; i < x; i++) {
        if(arr[i] == y) {
            a++;
        }
    }
    printf("%d", a);
}