#include <stdio.h>
#include <cs50.h>

//int main will always return an integer;
//when the parameter at int main is void it means the programme doesn't allow the use of commandline arguments;
//However, when the function main takes parameters argc and argv it means that the programme can take commandline arguments;

int main (int argc, string argv[]) {
    if (argc == 3) {
        printf("My name is %s %s\n", argv[2], argv[1]);
    }
    return 0;
}