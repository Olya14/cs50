#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
//using namespace std;

int main(void) {

    cout << "Enter your name: " << endl;
    string myName;
    getline(cin, myName); //cin >> myName;

    cout << "Hello, " << myName << "! =)" << endl;

    short year = 2019;
    short age = 0;
    cout << "Enter your year of birth: " << endl;
    cin >> age;
    cout << "Your age is " << year-age << " years old" << endl;
   return 0;

}