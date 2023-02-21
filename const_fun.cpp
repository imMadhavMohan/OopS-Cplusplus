#include <iostream>
#include <string>
using namespace std;

class A{
    private:
        int x;
    public: 
        void setX(int x) {
            this->x=x;
        }

        int increment() const
        {
            // x++; Not possible to increase the mem_var val from the const fun
            return x;
        }
};

int main(){
    A obj;
    obj.setX(7);
    cout<<obj.increment();
    
    return 0;
}