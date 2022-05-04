#include "iostream"
using namespace std;

class A{
    protected:
        int a{};   
    public: 
        A(int val): a{val}{};
};

class B: public A{
    public:
        B(int val): A{val}{};
        void display(){
            cout<<a; // 'a' is protected
        }
};

int main(){
    B bObj(4);
    bObj.display();
}

