#include <stdio.h>

int main()
{
    typedef char *string; // I have created a datatype called string which essentially is char *
    string s = "Hi!";       // A string is basically a pointer to a character

    printf("String pointer: %p\n", s);              // Will print the string pointer
    printf("First character pointer: %c\n", s[0]); // Will print the first character of our string
    printf("Second character pointer: %c\n", s[1]); // Will print the second character of our string
    printf("Third character pointer: %c\n", s[2]); // Will print the third character of our string
    printf("Null character pointer: %p\n", &s[3]); // Will print the null escape pointer of our string
    return 0;                                       // Will terminate our operation
}
