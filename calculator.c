#include <cs50.h>
#include <stdio.h>

int main (void) {
    long x = get_long("Enter the value of x: ");
    long y = get_long("Enter the value of y: ");

    double z = (double)x/(double)y;

    printf("%.20f\n", z);
}