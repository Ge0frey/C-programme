#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *list = malloc(3 * sizeof(int));

    if (list == NULL) 
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int i;
    for (i = 0; i < sizeof(int); i++)
    {
        printf("%i\n", list[i]);
    }
}