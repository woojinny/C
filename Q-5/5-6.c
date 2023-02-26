#include <stdio.h>

int main(void)
{
    int i, a;
    int tax = (0.09 * i);
    double b;
    double payment;

    printf("type your electric usage : ");
    scanf("%d", &i);
    

    if(i > 0 && i <= 100)
    {
        a = 370;
        b = 52.00;        
    }
    else if(i <= 200)
    {
        a = 660;
        b = 88.50;        
    }
    else if(i <= 300)
    {
        a = 1130;
        b = 127.80;        
    }
    else if(i <= 400)
    {
        a = 2710;
        b = 184.30;        
    }
    else if(i <= 500)
    {
        a = 5130;
        b = 274.30;        
    }
    else
    {
        a = 9330;
        b = 494.00;        
    }
    payment = a + (b * i) + tax;
    printf("you have to pay %d", (int) payment);

    return 0;
}