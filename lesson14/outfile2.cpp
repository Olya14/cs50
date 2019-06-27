#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

int main(void){

    ofstream file;
    string filename = "test.txt";
    string path = "filler/";
    string full = path + filename;
    char * a = new char [a, full.length()+1];
    strcpy(a, full.c_str());
    file.open(a, ios::out);
    if(file.is_open()){

        file<<"I'm a class representive";
    }
    file.close();
    return 0;
}