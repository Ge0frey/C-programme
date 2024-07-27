#include <stdio.h>
#include <cs50.h>

//int main will always return an integer;
//when the parameter at int main is void it means the programme doesn't allow the use of commandline arguments;
//However, when the function main takes parameters argc and argv it means that the programme can take commandline arguments;

int main(int argc, string argv[])
{
    if (argc == 2) {
        printf("Hello %s\n", argv[1]);
    } else {
        printf("Hello world\n");
    }
}