#include "iostream"
using namespace std;

class A{
    public: 
        void display(){
            cout<<"Class-A\n";
        }
};

class B{
    public:
        void display(){
            cout<<"Class-B\n";
        }
};

class C : public A, public B{
    public:
        void view(){
            // display(); // cause ambiguity unless we use exact scopresolution operator
            A::display();
            B::display();
    }
};

int main(){
    C cObj;
    cObj.view();
}