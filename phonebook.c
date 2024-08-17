#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string names;
    string numbers;
} person;

int main(void)
{
    person people[2];

    people[0].names = "Ricky Leonard";
    people[0].numbers = "(806) 395-3944";

    people[1].names = "Delia Craig";
    people[1].numbers = "(980) 247-6323";

    string contact = get_string("Enter name: ");

    int n = 2;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(people[i].names, contact) == 0)
        {
            printf("the contact is %s\n", people[i].numbers);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}