#include <stdio.h>

int main(void)
{
    char    name[80] = "Woojin_Lee";
    char    blood_type[80] = "AB";
    int age;
    double  height;

    age = 27;
    height = 189.5;
        
    printf("profile after 10years...\n");
    printf("name : %s\n", name);
    printf("age : %d\n", age);
    printf("height : %.1lf\n", height);
    printf("blood_type : %s\n", blood_type);

    return 0;
}