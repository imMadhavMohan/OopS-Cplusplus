#include <iostream>
#include <string>
using namespace std;

class A{    
    public: 
        void sayHello() const{ // can be called bye const & non-const obj
            cout<<"Hi Hello, Madhav Mohan\n";
        }

        void sayBye() {
            cout<<"Hi, Madhav Mohan\n";
        }
};

int main(){
    const A obj;
    obj.sayHello();
    // obj.sayBye(); non const fun can't be call from const obj

    return 0;
}