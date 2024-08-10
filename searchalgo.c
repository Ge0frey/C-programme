#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {20,500,10,5,100,1,50};
    
    int n = get_int("Enter number: \n");

    for (int i = 0; i < 7; i++ ) {
        if (numbers[i] == n) {
            printf("Number found\n");
            return 0;
        }
    }
    printf("Number not found\n");
    return 1;
}