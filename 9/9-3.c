#include <stdio.h>

int main(void)
{
    int a = 10, b = 15, total;
    double avg;
    int *pa, *pb;
    int *pt = &total;
    double *pg = &avg;

    pa = &a;
    pb = &b;

    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("gap : %d, %d\n", *pa, *pb);
    printf("sum : %d\n", *pt);
    printf("avg : %.1lf\n", *pg);

    return 0;
}