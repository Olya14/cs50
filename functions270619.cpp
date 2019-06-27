#include <iostream>
#include <string>

using namespace std;

string get_name();
void hello();
void hello(string nam);
void print_for(int x, int y);

int main()
{

//    for (int i = 0;i < 10;++i) {
//        string name;
//        cin >> name;
//        cout << "Hello " << name;
//    }

//    string name = get_name();
//    cout << "Hello " << name;

    //hello();

//    hello(get_name());
//    print_for(2, 5);

    for (int i = 0;i < 20;++i) {
        if (i % 2 == 0)
            cout << i << endl;
    }

    cout<< endl;
    return 0;
}

string get_name()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    return name;
}

void hello()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name;
}

void hello(string nam)
{
    string name = nam;
    cout << "Hello " << name;
}
void print_for(int x, int y)
{
    for (int i = x;i < y;++i) {
        cout << i << endl;
    }
}





//task1.cpp
//#include <iostream>

//using namespace std;

//int main()
//{
//for (int i = 0;i < 10;++i) {
//    cout << i;
//}
//int i = 10;
//while (i < 10) {
//    cout << i;
//    ++i;
//}

//do
//{
//    cout << i;
//    i++;
//} while(i < 10);

//    return 0;
//}


//task2.cpp
//#include <iostream>
//#include <string>

//using namespace std;

//int main()
//{
//    string s = "cs50";
//    cout << s;
//cout<< endl;
//    char c1[5] ={'c','s','5','0'};
//    char c2[5] ={'c','s','5','0','\0'};
//    cout << c1;
//    cout<< endl;
//    cout << c2;
//    cout<< endl;

//    char c[5] = "cs50";
//    cout << c;
//    cout<< endl;
//    return 0;
//}
