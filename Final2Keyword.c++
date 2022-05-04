#include "iostream"
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Hi!";
    }
};

class Child : public Base
{
public:
    void display() override final
    { // // we can't override the display() further in other subclasses of Child
        cout << "Hello!";
    }
};

int main()
{
    Child obj;
    Base &base = obj;
    base.display(); // Give error
}