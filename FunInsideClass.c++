#include<iostream>
using namespace std;

class student{
    public:
       int age; // instance var
       int id;
       string name;
       void insert(int age ,int id, string name){ // inside define function
           this->name = name;
           this->age = age;
           this->id = id;
       }
       void display(); // outer define function
};

void student::display(){ // :: scope resolution operator
    cout << this->name << " " << this->age << " " << this->id;    
}

int main(){
    student st1;
    st1.insert(22, 1,"Maddy");
    st1.display();
}