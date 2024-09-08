#include <stdio.h>
#include <stdlib.h>

int main()
{
    int scores[1024]; //when you uninitialize an array and print it out you get garbage values.Remnants stored in your memory
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}