#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) // swap function taking two pointer integers as parameters
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x = 1; // initializing the vaue of x
    int y = 2; // initializing the vaue of y

    printf("x is %i, y is %i\n", x, y); // printing before swap
    swap(&x, &y);                         // Calling the swap function passing x and y as arguments to the function
    printf("x is %i, y is %i\n", x, y); // printing after swap
}