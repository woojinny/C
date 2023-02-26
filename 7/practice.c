#include <stdio.h>

int rec_func(int n);

int main(void)
{
    int num;

    printf("type number : ");
    scanf("%d", &num);
    printf("%d", rec_func(num));
    
    return 0;
}

int rec_func(int n)
{
    //int sum = 0;
    //int sum = 1;

    if(n == 1){
    return 1;
    }
    else{
    return(rec_func(n - 1) + n);
    }
    //sum += n;
    //rec_func(n-1);

    //return sum;
}