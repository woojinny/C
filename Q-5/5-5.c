#include <stdio.h>

int main(void)
{
    int rich; //= 150;
    double grade; //= 4.1;
    int reward;

    printf("type richness and grade");
    //gets(rich, grade);
    scanf("%d", &rich);
    scanf("%lf", &grade);
    if(rich >= 100 && grade >= 4.0)
    {
        reward = 20;
        printf("you have to pay %d\n", 100 - reward);
    }
    if(rich < 100)
    {
        reward = 40;
        printf("you have to pay %d\n", 100 - reward);
    }
    return 0;
}