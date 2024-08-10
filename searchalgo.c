#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string strings[] = {"Tuahajok", "Guvocriw", "Luevwu", "Cekiepi", "Kicedahi", "Umnicpe", "Datdike"};

    string s = get_string("Enter city name: \n");

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("City found\n");
            return 0;
        }
    }
    printf("City not found\n");
    return 1;
}