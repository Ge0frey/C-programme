#include <stdio.h>

int main () {
    int i;
    int j;

    printf("Enter number: ");
    scanf("%d", &i);
    printf("Enter number: ");
    scanf("%d", &j);

    if (i == j) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
}