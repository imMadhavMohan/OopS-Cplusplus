#include "iostream"
using namespace std;

class Base final{
    public:
        virtual void sayHello(){
            cout<<"HelloBaby!";
        }
};

class Derive: public Base{
    public:
        void sayHello() override{
            cout<<"HelloDear!";
        }
};


int main()
{
    Derive object;
    object.sayHello(); //  CTE error will occur as Base can't
    return 0;   // be inherited
}

