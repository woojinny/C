#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    /* data */
    string name;
    string number;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "woo";
    people[0].number = "010-6249-0564";

    for(int i = 0; i < 4; i++)
    {
        if(strcmp(people[i].name, "woo") == 0)
        {
            printf("%s", people[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}

