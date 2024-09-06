#include <stdio.h>

int main()
{
    typedef char *string; // I have created a datatype called string which essentially is char *
    string s = "Hi!";       // A string is basically a pointer to a character

    printf("First character pointer: %c\n", *s); // Will print the first character of our string
    printf("Second character pointer: %c\n", *(s+1)); // Will print the second character of our string
    printf("Third character pointer: %c \n", *(s+50000)); // Will print the third character of our string
    return 0;                                       // Will terminate our operation
}
