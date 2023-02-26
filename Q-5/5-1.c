#include <stdio.h>

int main(void)
{
    int a, b;
    a = 10;
    b = 3;

    if(a > b)
    printf("%d", a / b);
    else
    printf("%d", a % b);

    return 0;
}