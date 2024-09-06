#include <stdio.h>
#include <cs50.h>

int main () {
    int i = get_int("Enter number: ");
    int j = get_int("Enter number: ");

    if (i == j) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
}