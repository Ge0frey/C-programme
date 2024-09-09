#include <stdio.h>

int main (void) 
{
    int x;
    int y;

    printf("Enter x; ");
    scanf("%i", &x); //storing by reference and not by value
    printf("Enter y; "); 
    scanf("%i", &y); //Do not use the newline character \n in scanf as it is treated like white space

    printf("The value of x is %i and the value of y is %i\n", x,y);
}