#include <stdio.h>

int main(void)
{
    int A;

    printf("type integer : ");
    scanf("%d", &A);

    if(A >= 0)
    printf("positive\n");
    else
    printf("negative\n");

    return 0;
}