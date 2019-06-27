#include <cs50.h>
#include <stdio.h>

    int main(void)
{
    string s = get_string();
    int length = 0;
    while (s[length] != '\0')
       length++;
    printf("%i \n", length);
}