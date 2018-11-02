#include <iostream>

int main() {
    int a=0;
    int *b;
    b=&a;
    float c = 0.1;
    *b=7;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << *b << std::endl;
    std::cout << "a=" << &a << std::endl;
    std::cout << "b=" << b << std::endl;

    b=(int *)&c;
    std::cout << "c=" << c << std::endl;
    std::cout << "c=" << &c << std::endl;
    std::cout << "b=" << *b << std::endl;
    std::cout << "b=" << b << std::endl;
    return 0;
}