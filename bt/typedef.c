#include <stdio.h>

typedef char 아무거나;

int main(void)
{
    아무거나  str[80] = "Testing typedefine.";

    printf("%s\n", str);

    return 0;
}