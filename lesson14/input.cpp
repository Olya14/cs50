#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

int main(void){

    string line;
    ifstream file ("test.txt");
    if (file.is_open()){
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    } else cout << "Файл не выведен";
    return 0;
}