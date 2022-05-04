#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int id;
    int marks;
};

int main(){
    student st1;
    st1.age=12;
    st1.id=11;
    st1.marks=82;
    // cout<<st1; Error
    cout<<st1.id;
}