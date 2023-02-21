#include <iostream>
#include <string>
using namespace std;

class A{
    private:
        int x;
    public: 
        A(int x=0):x(x){
            cout<<"Obj created:\t";
        }

        int increment() const
        {            
            return x;
        }
};

int main(){
    A obj(7);    
    cout<<obj.increment();
    
    return 0;
}