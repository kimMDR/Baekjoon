#include  <stdio.h>
int main()
{
    unsigned int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (b%10)*a);
    printf("%d\n", ((b/10)%10)*a);
    printf("%d\n", (((b/10)/10)%10)*a);
    printf("%d", a*b);
    return 0;
}