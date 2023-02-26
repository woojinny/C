#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int tot, chg;
    int chg500, chg100, chg50, chg10;
    
    printf("type number of a and b : ");
    scanf("%d%d", &a, &b);
    printf("price of total a : %d\n", a * 70);
    printf("price of total b : %d\n", b * 30);
    
    tot = (a * 70) + (b * 30);
    chg = 1000 - tot;
    printf("chage = %d\n", chg);

    chg500 = chg / 500;
    chg100 = (chg - (chg500 * 500)) / 100;
    chg50 = (chg - (chg500 * 500) - (chg100 * 100)) / 50;
    chg10 = (chg - (chg500 * 500) - (chg100 * 100) - (chg50 * 50)) / 10;

    printf("500 : %d, 100 : %d, 50 : %d, 10 : %d\n", chg500, chg100, chg50, chg10);    

    return  0;
}