#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main () {

    typedef char *string;

    string s = get_string("Enter string: ");
    string t = s;

    t[0] = toupper(t[0]);

    printf("%p\n", s);
    printf("%p\n", t);

}