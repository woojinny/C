#include <stdio.h>

int main(void)
{
    int dis, spd;
    double time;
    int hr, min;
    double  sec;

    printf("type distance and speed : ");
    scanf("%d%d", &dis, &spd);
    time = (double) dis / spd;
    printf("%lf\n", time);

    hr = (int) time;
    time -= hr;
    min = (int) (60 * time);
    time -= min;
    sec = (60 * time);
    
    printf("spend time : %dhour %dmin %.3lfsec.\n", hr, min, sec);

    return 0;
}