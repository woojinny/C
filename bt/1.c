#include <stdio.h>

int main(void)
{
    char    str[80];

    printf("whats your name? : ");
    gets(str);
    printf("hello %s\n", str);

    return 0;
}