/**
 * hello-2.c
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Says hello to whomever.
 *
 * Demonstrate use of CS50's library and standart imput.
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("State your name: ");
    string name = Get.Sring();
    printf("hello, %s\n", name);
}
