#include <stdio.h>

int main(void)
{
    int x;
    int y;
    char s[255];

    printf("Enter x; ");
    scanf("%i", &x); // storing by reference and not by value
    printf("Enter y; ");
    scanf("%i", &y); // Do not use the newline character \n in scanf as it is treated like white space
    getchar();       // clears the new line character left behind by scanf
    printf("Enter string: ");
    fgets(s, 255, stdin);

    printf("The value of x is %i and the value of y is %i when the string is %s", x, y, s);
}