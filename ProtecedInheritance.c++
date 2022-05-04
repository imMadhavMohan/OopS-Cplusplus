#include "iostream"
using namespace std;

class Base
{
public:
    int a{}; // can be accessed by anybody
protected:
    int b{}; // can be accessed by Base members, friends, and derived classes
private:
    int c{}; // can only be accessed by Base members and friends (but not derived classes)
};

class Derived : public Base
{
public:
    Derived()
    {
        a = 1;    // allowed: can access public base members from derived class
        b = 2; // allowed: can access protected base members from derived class
        // c = 3;   // not allowed: can not access private base members from derived class
    }
};

int main()
{
    cout<<"Start\n";
    Base base;
    base.a = 1;    // allowed: can access public members from outside class
    // base.b = 2; // not allowed: can not access protected members from outside class
    // base.c = 3;   // not allowed: can not access private members from outside class
    cout<<"end\n";

    return 0;
}