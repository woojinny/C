#include <stdio.h>
#include <string.h>

int main(void)
{
    char fruit[20] = "strawberry";

    printf("ft : %s\n", fruit);
    strcpy(fruit, "banana");
    printf("ftj : %s %s\n", fruit, "jam");

    return 0;
}