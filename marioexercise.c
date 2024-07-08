#include <stdio.h>

int get_size(void);
void print_brick(int size);

int main(void)
{
    int n = get_size();
    print_brick(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("What is the size of the brick? ");
    } while (n < 1);
    return n;
}

void print_brick(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("?");
        }
        printf("\n");
    }
}