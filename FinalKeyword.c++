#include "iostream"
using namespace std;

class Base{
    public:
        virtual void display() final{
            cout<<"Hi!";
        }
};

class Child: public Base{
    public:
        void display(){ // we can't override the display as it is final 
            cout<<"Hello!";
        }
};

int main(){    
    Child obj;
    Base& base = obj;
    base.display(); // Give error
}