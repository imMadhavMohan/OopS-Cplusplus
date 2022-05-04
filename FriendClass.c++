#include "iostream"
using namespace std;

class A{
    private:
        int val = 5;
        friend class B; // friend class implemented outside of class
};

class B{
    public:
        void display(A &obj){
            cout<<"Val is "<<obj.val;
        }
};

int main(){
    A aObj;
    B bObj;
    bObj.display(aObj);
}