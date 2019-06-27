#include <cs50.h>
#include <stdio.h>

int main(void){

int count = 5;

switch (count)
{
  case 1:
    // виконати, якщо n дорівнює константі1
    printf("constant = 1 => black");
    break;
  case 2:
    // виконати, якщо n дорівнює константі2
    printf("constant = 2 => yellow");
    break;
  default:
    // виконати, якщо n не дорівнює жодній із вказаних констант.
    printf("something else");
    break;
}

}

