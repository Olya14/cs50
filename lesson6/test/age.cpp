#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, const char *argv[]){
    if (argc == 2)
    {
        cout << atoi(argv[1]) * 2 << endl;
    }else
    {
        cout << "Try Later" << endl;
    }
    return 0;
}