#include <stdio.h>

int get_num(void);

int main(void)
{
    int res;
    
    res = get_num();
    printf("return = %d\n", res);
    return 0;
}

int get_num(void)
{
    int num;

    printf("positive : ");
    scanf("%d", &num);

    return num;
}
