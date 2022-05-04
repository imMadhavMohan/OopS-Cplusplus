#include "iostream"
using namespace std;

class Base{
    public:
        virtual void display(){
            cout<<"Hello Base\n";
        }
        void print(){
            cout<<"Bye-Bye\n";
        }
};

class Derived: public Base{
    public:
        void display(){
            cout<<"Hello Derive\n";
        }
        void print(){
            cout<<"Hi-Hello\n";
        }
};

int main(){
    cout<<"With Virtual\n";
    Derived d; //with virtual
    Base *objMy = &d;
    objMy->display();    

    cout << "\nWithout Virtual\n";
    Derived d2; //without virtual
    Base* objMine = &d2;
    objMine->print();
}