#include <stdio.h>

int main(void)
{
    int tuna, coffe, cup;
    int change;
    int chg5000, chg1000, chg500, chg100, chg50, chg10;

    printf("type three prices : ");
    scanf("%d%d%d", &tuna, &coffe, &cup);
    
    change = 10000 - (tuna + coffe + cup);
    printf("change = %d\n", change);

    chg5000 = change / 5000;
    chg1000 = (change - (chg5000 * 5000)) / 1000;
    chg500 = (change - (chg5000 * 5000) - (chg1000 * 1000)) / 500;
    chg100 = (change - (chg5000 * 5000) - (chg1000 * 1000) - (chg500 * 500)) / 100;
    chg50 = (change - (chg5000 * 5000) - (chg1000 * 1000) - (chg500 * 500) - (chg100 * 100)) / 50;
    chg10 = (change - (chg5000 * 5000) - (chg1000 * 1000) - (chg500 * 500) - (chg100 * 100) - (chg50 * 50)) / 10;

    printf("5000 : %d\n1000 : %d\n500 : %d\n100 : %d\n50 : %d\n10 : %d\n", chg5000, chg1000, chg500, chg100, chg50, chg10);
    
    return 0;
}