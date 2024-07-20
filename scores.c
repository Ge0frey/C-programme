#include <stdio.h>
#include <cs50.h>

float average(int array[]);

const int n = 4;


int main(void)
{


    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("score: ");
    }

    printf("The average score is: %f\n", average(scores));
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum / (float) n ;
}