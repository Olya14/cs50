#include <stdio.h>
#include <cs50.h>

#define CLASS_SIZE 30

int main(void)
{
    //Оголошення масиву
    int scores_array[CLASS_SIZE];

    //Заповнення масиву
    for(int i = 0; i < CLASS_SIZE; i++)
    {
         printf("Enter score for student %d: ", i);
         scores_array[i] = GetInt();
    }
}