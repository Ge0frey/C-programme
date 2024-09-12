#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string uppercase = get_string("Before: ");
    printf("After:  ");
    int i;
    for (i = 0; i < strlen(uppercase); i++)
    {
        if (uppercase[i] >= 'a' && uppercase[i] <= 'z')
        {
            printf("%c", uppercase[i] - 32);
        }
        else
        {
            printf("%c", uppercase[i]);
        }
    }
    printf("\n");
}