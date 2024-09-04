#include <stdio.h>

int main () 
{
    int n = 60;
    int * p = &n;
    printf("%p\n", p);
    return 0;
}