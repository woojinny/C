#include <stdio.h>

int main(void)
{
    int i;

    printf("type integer : ");
    scanf("%d", &i);
    if(i % 2 == 0)
    printf("even\n");
    else
    printf("odd\n");

    return 0;
}