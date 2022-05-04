#include "iostream"
using namespace std;

class A{
    public:
        A(){
            cout<<"\nGrandFather";
        }
};

class B: public A{
    public:
        B(){
            cout<<"\nFather";
        }
};

class C: public B{
    public: C(){
        cout<<"\nChild";
    }
};

class D: public C{
    public: D(){
        cout<<"\nSubChild";
    }
};

// Whenever a child obj created all its parents constructor are called by default if any

int main(){
    cout<<"Im A";
    A a;

    cout<<"\n\nIm B";
    B b;

    cout<<"\n\nIm C";
    C c;

    cout<<"\n\nIm D";
    D d;
}