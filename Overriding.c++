#include "iostream"
using namespace std;

class Base{
    public:
        void sayHello(){
            cout<<"Hello Maddy\n";
        }
};

class Child: public Base{
    public: 
        void sayHello(){
            cout<<"Bye-Bye\n";
            //call overridden function
            Base::sayHello();
        }
};

int main(){
    Child obj1;
    obj1.sayHello();

    
    obj1.Base::sayHello(); // call Parent's sayHello function
}