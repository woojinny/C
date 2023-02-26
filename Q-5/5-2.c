#include <stdio.h>

int main(void)
{
    int a, b, c;
    int tot = 259;
    double avg = tot / 3.0;

    printf("avg : %.1lf\n", avg);
    if(avg >= 90) printf("A");
    else if(avg >= 80) printf("B");
    else if(avg >= 70) printf("C");
    else printf("F");

    return 0;
}