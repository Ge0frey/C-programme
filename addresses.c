#include <stdio.h>
#include <cs50.h>

string s = "Hi";

string * ps = &s; 


int main () 
{
    int n = 60;
    int * p = &n;
    printf("pointer of n variable: %p\n", p);
    printf ("String pointer: %p\n%p\n", ps, ps[0]);
    return 0;
}