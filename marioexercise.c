#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter height of brick: ");
    } while (height < 1);
    for (int row = 0; row < height; row++)
    {
        printf("%i", row);
        for (int column = 0; column < height; column++)
        {
            printf("%i", column); 
        }
        printf("\n");
    }
}