#include <stdio.h>

int main(void)
{
    int num, ans, count = 0;
    ans = 19;
    while(1)
    {
        printf("type number : ");
        scanf("%d", &num);
        count ++;
        if(num > ans)
        {
            printf("down\n");
        }
        else if(num < ans)
        {
            printf("up\n");
        }
        else if(num == ans)
        {
        printf("correct!\n");
        break;
        }
    }
    printf("you tried %d times\n", count);
    return 0;
}