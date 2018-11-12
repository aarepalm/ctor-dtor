#include <iostream>
#include <string>

struct Interface
{
    Interface() {std::cout << "Interface()" << std::endl;}
    virtual ~Interface() {std::cout << "~Interface()" << std::endl;}
 
    virtual int SomeGetter()=0;
};

struct Impl : public Interface
{
    Impl() {std::cout << "Impl()" << std::endl;}
    virtual ~Impl() {std::cout << "~Impl()" << std::endl;}
    
    virtual int SomeGetter() {return 1;}
};


int main()
{
    Interface* ptrToImpl = new Impl;    
    delete ptrToImpl;
}
