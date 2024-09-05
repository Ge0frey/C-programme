#include <stdio.h>

int main () 
{
    typedef char * string; //I have created a datatype called string which essentially is char *
    char * s = "Hi"; //A string is basically a pointer to a character
    string * ps = &s; 

    printf("String pointer: %s\n", s);  //Will print the string pointer
    printf ("First character pointer: %p\n", ps[0]);  //Will print the first character of our string
    return 0; //Will terminate our operation
}
