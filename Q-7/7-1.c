#include <stdio.h>

int main(void)
{
    int res = 1;
    int i = 0;

    printf("type integer : ");
    scanf("%d", &i);
    for(i = 0; i < 10; i++)
    res *= 2;
    printf("%d\n", res);

    return 0;
}







// int my_power(void)
// {
//     int res = 1;

//     for(i =0; i < 10; i++)
//     res *= 2;
//     printf("%d", res);

//     return 0;
// }

// int main(void)
// {
//     printf("type integer");
//     scanf("%d", &i);
//     my_power(i);

//     return 0;
// }