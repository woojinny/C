#include <stdio.h>

int main(void)
{
    int i, j, num;
    int line = 0;

    printf("type integer which is 2 or more :");
    scanf("%d", &num);
    for(i = 2; i <= num; i++)
    {
        for(j = 2; j < i; j++)
        {
            if((i % j) == 0)
            break;
        }
        if(i == j)
        {
            printf("%5d", i);
            line++;
        }
        //if(line % 5 == 0)
        //printf("\n");
    }
    return 0;
}