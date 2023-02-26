#include <stdio.h>

int main(void)
{
    char str[80] = "applejam";

    printf("first : %s\n", str);
    printf("input : ");
    scanf("%s", str);
    printf("second : %s", str);

    return 0;
}