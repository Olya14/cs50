#include <iostream>

template<class T, class U, class E>
int formula (T a, U b, E c) {
    return a * a - b * b + 2 / c;
    //std::cout << a * a - b * b + 2 / c << std::endl;
}

int main (int argc, const char *argv[])
{
    auto a = 5;
    auto b = 2;
    auto c = 1.0;
    float d = 0.0;

    //std::cout << formula (a, b, c); << std::endl;
    d = formula (a, b, c);
    //d = a * a - b * b + 2 / c;
    std::cout << d << std::endl;

    return 0;
}
