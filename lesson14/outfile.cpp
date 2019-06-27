#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

int main(void){

    ofstream file;
    const char * filename = "test.txt";
    file.open(filename);
    file<<"I'm a class rep";
    file.close();

    return 0;
}