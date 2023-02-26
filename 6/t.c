#include <stdio.h>

int main(void)
{
    int i, j, res;
    
    for(i = 2; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            res = i * j;
            printf("%d * %d = %d\n", i, j, res);
        }
    }
    return 0;
}
