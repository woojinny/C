#include <stdio.h>

int main(void)
{
    int a, b = 0;
    int res = 0;

    printf("type a :");
    scanf("%d", &a);

    if(a >= 10)
    res = a;
    printf("%d", res);
    if(b != 0)
    res = a / b;
    printf("%d", res);
    
    printf("%d", res);

    return 0;
}