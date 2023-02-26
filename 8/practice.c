#include <stdio.h>

int main(void)
{
    char    str[80];
    int i;
    int cou = 0;

    printf("type sentence : ");
    gets(str);

    for(i=0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A')&&(str[i] <= 'Z'))
        {
            str[i] = str[i] + 32;
            cou++;
        }
    }
    printf("changed sentence : %s\n", str);
    printf("changed number : %d\n", cou);
    return 0;
}