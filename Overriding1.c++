#include "iostream"
using namespace std;

class Base{
    public: 
        virtual void display(){
            cout<<"Hello Maddy\n";
        }        
};

class Child: public Base{
    public:
        void display(){
            cout<<"Hello Boy Maddy\n";
        }
};

int main(){
    Base obj;
    obj.display();

    Child obj1;
    obj1.display();
}