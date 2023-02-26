#include <stdio.h>

int main(void)
{
    double a = 3.7;
    int b;
    b = (int)a;

    printf("%d\n", b);
    printf("%.0lf\n", a);

    return 0;
}