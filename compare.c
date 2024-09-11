#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{

    typedef char *string;

    string i = get_string("Enter string: ");
    string j = get_string("Enter string: ");

    if (strcmp(i, j) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("%p\n", &i);
    printf("%p\n", &j);
}