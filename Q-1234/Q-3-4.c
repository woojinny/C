#include <stdio.h>

int main(void)
{
    char    name[80];
    int age;
    double  height;
    printf("name : ");
    scanf("%s", name);
    printf("age and height : ");
    scanf("%d%lf", &age, &height);
    printf("%s,%dsal,%.1lfcm\n", name, age, height);

    return 0;
}