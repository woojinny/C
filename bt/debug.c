#include <stdio.h>

int main(void)
{
    char    str1[80];
    char    str2[80];

    printf("what is your name?");
    gets(str1);
    //scanf("%s", &str1[]);
    printf("where do you live?");
    gets(str2);
    //scanf("%s", &str2[]);
    printf("Hello, %s, from %s\n", str1, str2);

    return 0;
}