#include <stdio.h>
#include <cs50.h>

void draw(int n); // make sure to always include the prototype

int main(void)
{
    int brick = get_int("Enter number of bricks: ");

    draw(brick);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}