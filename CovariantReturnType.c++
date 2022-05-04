#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    // This version of getThis() returns a pointer to a Base class
    virtual Base *getThis()
    {
        cout << "called Base::getThis()\n";
        return this;
    }
    void printType() { cout << "returned a Base\n"; }
};

class Derived : public Base
{
public:
    // Normally override functions have to return objects of the same type as the base function
    // However, because Derived is derived from Base, it's okay to return Derived* instead of Base*
    Derived *getThis() override
    {
        cout << "called Derived::getThis()\n";
        return this; // return same class obj
    }
    void printType() { cout << "returned a Derived\n"; }
};

int main()
{
    Derived d{};
    Base *b{&d};
    d.getThis()->printType();  // calls Derived::getThis(), returns a Derived*, calls Derived::printType
    b->getThis()->printType(); // calls Derived::getThis(), returns a Base*, calls Base::printType

    return 0;
}