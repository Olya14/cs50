#include <iostream>

using namespace std;

int main(void)
{
    int num_1, num_2, selection;
    cout << "Chooose numbers" << endl;
    cin >> num_1 >> num_2;
    cout << "Choose an operation" << endl <<
        "1. Addition" << endl << // Сложение
        "2. Substraction" << endl << // Вычитание
        "3. Multiplication" << endl << // Умножение
        "4. Division" << endl; // Деление
    cin >> selection;
    switch(selection)
    {
    case 1:
        cout << "Result " << num_1 + num_2 << endl;
        break;
    case 2:
        cout << "Result " << num_1 - num_2 << endl;
        break;
    case 3:
        cout << "Result " << num_1 * num_2 << endl;
        break;
    case 4:
        cout << "Result " << num_1 / num_2 << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }
    //system("pause");
}