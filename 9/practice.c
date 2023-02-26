#include <stdio.h>

void swap(double *a, double *b);
void line_up(double *max, double *mid, double *min);

int main(void)
{
    double max, mid, min;

    printf("type 3 real number : ");
    scanf("%lf%lf%lf", &max, &mid, &min);
    line_up(&max, &mid, &min);
    printf("fixed numbers : %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}

void swap(double *a, double *b)
{
    double s;

    s = *a;
    *a = *b;
    *b = s;
}

void line_up(double *max, double *mid, double *min)
{
    if(*max < *min)
    swap(max, min);
    if(*max < *mid)
    swap(max, mid);
    if(*mid < *min)
    swap(mid, min);
}