#include "iostream"
using namespace std;

class Papa{
    protected: 
        int a;
    public: 
        Papa(int val):a{val}{}
        void display(){
            cout<<"Hello Papa-"<<a;
        }
};

class Child: public Papa{
    public:
        Child(int b): Papa{b}{} // we are accessing Parents  var so we 
        void display(){ // should use parents constructor to initialize parent's var
            cout<<"\nHi baby-"<<a;
        }
};

int main(){
    Papa P{9};
    P.display();

    Child C{99};    
    C.display(); // Overriding
}