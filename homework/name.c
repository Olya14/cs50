#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name;
    name = get_string("Enter your name: \n");
    printf("Hello, %s! =)\n", name);

    short year = 2019;
    short age = 0;
    age = get_int("Enter the year of your birth \n");
    printf("You're %i years old", year-age);
}
