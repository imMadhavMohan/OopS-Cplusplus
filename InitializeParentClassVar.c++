#include "iostream"
using namespace std;

class A
{
public:   
    A(int a)
    {
        cout << "\na is: "<<a;
    }
};

class B : public A
{
public:    
    B(int a,int b): A{a}
    {
        cout << "\nb is: "<<b;
    }
};

class C : public B
{
public:    
    C(int a, int b, int c) : B{a,b}
    {
        cout << "\nc is: "<<c;
    }
};

// Whenever a child obj created all its parents constructor are called by default if any

int main()
{
    C cObj(2,4,3);
}