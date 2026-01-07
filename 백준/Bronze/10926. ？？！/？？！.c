#include  <stdio.h>
int main()
{
    char name[50];
    char add_str[] = "??!";
    scanf("%s", &name);
    strcat(name, add_str);
    printf("%s", name);
    return 0;
}