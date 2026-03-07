#include <stdio.h>
int main() {
    float x, y, z, r = 0;
    float g = 0;
    float arr[1000];
    float aver[1000];
    float sum = 0;

    scanf("%f", &x);
    for(int i = 0; i < x; i++) {
        y = 0;
        scanf("%f", &y);
        arr[i] = y;
    }

    for(int j = 0; j < x; j++) {
        if(r < arr[j]) {
            r = arr[j];
        }
    }

    for(int t = 0; t < x; t++) {
        sum += (arr[t] / r)*100;
    }

    printf("%.2f", sum / x);
}