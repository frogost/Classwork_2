#include <iostream>

int main() {
    int a=1;
    float b=2;
    char c=3;

    int *e=&a;
    float *f=&b;
    char *g=&c;
    std::cout<<"a   "<<a<<"   "<<&a<<'\n';
    std::cout<<"b   "<<b<<"   "<<&b<<'\n';
    std::cout<<"c   "<<int (c) <<"   "<<(int*)&c<<'\n';

    std::cout<<"e   "<<*e<<"   "<< &e<<'\n';
    std::cout<<"f   "<<*f<<"   "<< &f<<'\n';
    std::cout<<"g   "<<int (*g) <<"   "<< &g<<'\n';
    return 0;
}