#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(j != 4)
            {
                if(i == j)
                printf("*");

                else if(i + j == 4)
                printf("*");

                else
                printf(" ");
            }
            
            else
            {
                if(i == j)
                printf("*\n");

                else if(i + j == 4)
                printf("*\n");

                else
                printf(" \n");
            }        
        }
    }

}
