#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x; // Declare an unitiallized value x
    int *y; // Declare an unitiallized value y

    x = malloc(sizeof(int)); // Allocate memory and store in X

    *x = 42; // Store value of 42

    y = x; // Make value of y to be the same as value of x

    *y = 13; // initialize value of y as 13

    printf("%d\n%d\n", *x, *y); // print the result
}