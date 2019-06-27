#include <iostream>
using namespace std;
int main (int argc, const char *argv[])
{
    if (argc == 4)
    {
    for(int i = 1; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    }
    else
    {
        cout << "hello" << endl;
    }
}