#include <stdio.h>
#include <cs50.h>

int main (void) {

    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("score: ");
    }

    printf ("The average score is: %f\n", (scores[0] + scores[1] + scores[2])/(float)3);
}