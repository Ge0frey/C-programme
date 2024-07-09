#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get size of brick
    int n;

    do
    {
        n = get_int("What is the size of the block? ");
    } while (n < 1);

    //print grid of bricks
    for (int i = 0; i < n; i++)
    {
        printf("i is %i\n", i);
        for (int j = 0; j < n; j++)
        {
            printf("j is %i\n", j);
            printf("?");
        }
        printf("\n");
    }
}