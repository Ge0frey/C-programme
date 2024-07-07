//Conditionals in C
#include <stdio.h>
#include <cs50.h>

int main(void) {
    int x = get_int("The value of X is: ");
    int y = get_int("The value of y is: ");

    if (x<y) 
    {
        printf("X is less than Y\n");
    }
    else 
    {
        printf("x is not less than y\n");
    }
}