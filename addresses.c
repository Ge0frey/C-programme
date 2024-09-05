#include <stdio.h>
#include <cs50.h>


int main () 
{
    char * s = "Hi"; //A string is basically a pointer to a character
    string * ps = &s; 

    printf("String pointer: %p\n", s);  //Will print the string pointer
    printf ("First character pointer: %p\n", ps[0]);  //Will print the first character of our string
    return 0; //Will terminate our operation
}
