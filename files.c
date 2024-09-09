#include <stdio.h>
#include <cs50.h>

int main ()
{
    FILE *file = fopen ("Employee.csv", "a");

    string name = get_string("Enter the employee name: ");
    string number = get_string("Enter employee number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}