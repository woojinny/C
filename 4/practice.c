#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double  weight, height, BMI;
//    char    'STANDARD', 'OVERWEIGHT';

    printf("Type weight(kg) and height(cm) : ");
    scanf("%lf%lf", &weight, &height);
    BMI = weight / (height * height / 10000);
    printf("%s\n", ((BMI >= 20.0) && (BMI < 25.0))? "STANDARD" : "OVERWEIGHT");

    return 0;
}
