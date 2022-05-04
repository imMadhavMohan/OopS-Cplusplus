#include "iostream"
using namespace std;

class Papa{    
    private: 
        int a;        
    public:
        Papa(int var):a{var}{}
    protected: 
        int b=99;
        void display(){
            cout<<"Hello papa-"<<a;
        }
};

class Child: public Papa{
    public:
        Child(int var):Papa{var}{}
        using Papa::display; // Don't use braces of function
        // now we can use it outside too as becomes public
        using Papa::b;
};

int main(){    
    Child c{9};
    c.display();
    cout<<'\n'<<c.b;
}