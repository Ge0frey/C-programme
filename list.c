#include <stdio.h>

int main()
{
    int list[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}