// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A{
    public:
        int x;
        virtual void doSum() = 0;
        virtual void getSum() = 0;
        A(int x){
            this->x = x;
        }
        virtual ~A() = 0;
};

A::~A(){
    cout<<"I'm virtual destructor\n";
}


class B: public A{
    public:
        int y;
        int z;
        B(int x,int y):A(x){this->y = y;};
        void doSum(){
            z = x+y;
        }
        void getSum(){
            cout<<"Sum is: "<<z;
        }
        void sayHi(){
            cout<<"Hi Maddy\n";
        }
        ~B(){
            cout<<"I'm destructor of Child class\n";
        }
};



int main() {
    // we can only create ptr & ref to an abstract class
    // can't instantiate it
    // ptr can access whatever defined in A , not any extra var or functions of Derived class except virtual fun
    A *ptr = new B(5,4);
    ptr->doSum();
    ptr->getSum();
    
    cout<<ptr->z; // Error 
    ptr->sayHi();
    return 0;
}
