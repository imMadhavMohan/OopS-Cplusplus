#include "iostream"
using namespace std;

class Add{
    private:
         int a;
    public: 
         Add(int a) : a(a) {}
         int getVal(){ return a;}
};

Add operator +(Add &obj1, Add &obj2){
    return Add{obj1.getVal() + obj2.getVal()}; // here we aren't using friend function 
}           // so we need to use Add() to get access to private member

Add operator +(int val, Add &obj2){
    return Add(obj2.getVal() + val);
}

int main() {
    Add obj1(3);
    Add obj2(4);

    Add obj3(obj1 + obj2);
    cout<<obj3.getVal();
    cout<<endl;
    Add obj4{3 + obj1};
    cout<<obj4.getVal();
}
