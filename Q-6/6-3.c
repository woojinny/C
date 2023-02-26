#include <stdio.h>

int main(void)
{
    int i;
    int res = 0;

    while(1)
    {
        printf("type integer : ");
        scanf("%d", &i);
        if(i <= 0)
        {
        break;
        }
        res = i + res;
    }
    printf("total sum : %d\n", res);

    return 0;
}