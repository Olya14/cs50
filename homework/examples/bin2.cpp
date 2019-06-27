#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    const int size_array = 10;
    int array_[size_array] = {-8, -7, -6, -6, -4, 2, 6, 7, 8, 15 }; // объявление одномерного массива
    cout << "array[" << size_array << "] = { ";
    for (int counter = 0; counter < size_array; counter++)
    {
     cout << array_[counter] << " "; // печать элементов одномерного массива array1
    }
    cout << " }";
    int average_index = 0, // переменная для хранения индекса среднего элемента массива
        first_index   = 0, // индекс первого элемента в массиве
        last_index    = size_array -1, // индекс последнего элемента в массиве
//--------------------------------------------------------
        search_value  = 15; // искомое (ключевое) значение
//--------------------------------------------------------
    if (last_index == -1) cout << "\narray is empty" << endl; // массив пуст

    while (first_index < last_index)
    {
        average_index = first_index + (last_index - first_index) / 2; // меняем индекс среднего значения
        search_value <= array_[average_index] ? last_index = average_index : first_index = average_index + 1;    // найден ключевой элемент или нет
    }
    if ( array_[last_index] == search_value)
        cout << "\nvalue is found" << "\nindex = " << last_index << endl;
    else
        cout << "\nvalue is not found" << endl;
    system("pause");
    return 0;
}