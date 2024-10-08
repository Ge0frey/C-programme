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

    int n = 4;

    int *tmp = realloc(list, n * sizeof(int));

    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    list = tmp;

    list[3] = 4;

    for (int i = 0; i < n; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}