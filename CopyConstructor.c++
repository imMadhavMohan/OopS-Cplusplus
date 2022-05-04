#include <iostream>
using namespace std;

class student{
    public:
        int age;
        string name;
        student(int age, string name){
            this->age = age;
            this->name = name;        
        }
        student(student &obj){ // want non modifiable use const
            this->age = obj.age;
            this->name = obj.name;
        }
};

int main(){
    student st1(22,"Maddy");
    student st2(st1);
    cout<<st2.age<<' '<<st2.name;
}