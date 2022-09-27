// friend class & function enable us to access the private member of the class, but just we need to pass the &obj of that class 
// to which we want to access.

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Person{
    int age ;
    int id;
    int pin;
    friend class Child; // Using this only we're able to access the private of class
    public:
        Person(int age, int id, int pin):age(age),id(id),pin(pin){}
};

class Child{
    public:
        int dob;
        Child(int dob):dob(dob){}
        void display(Person &obj);
};

void Child::display(Person &obj){
    cout<<obj.age<<" "<<obj.pin<<" "<<obj.id<<dob;
}


int main(){
    Person obj(23,2,1234); 
    Child cobj(9);
    cobj.display(obj);
    return 0;
}
