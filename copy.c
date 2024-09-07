#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    typedef char *string;

    string s = get_string("Enter string: ");
    string t = malloc(strlen(s) + 1);

    for (int i = 0; i < strlen(s) + 1; i++)
    {
        t[i] = s[i];
        if (strlen(t) > 0)
        {
            t[0] = toupper(t[0]);
        }
    }

    printf("%s\n", s);
    printf("%s\n", t);
}