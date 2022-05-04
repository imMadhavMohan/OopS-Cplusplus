#include "iostream"
using namespace std;

class student{
    private:
        int id; 
        string name;
    public:
        student(int id, string name){
            this->name = name;
            this->id = id;
            cout<<" This keyword";
        }
        void display(){
            cout<<id<<" "<<name;
        }
};

int main(){
    student st1{23, "Maddy"};
    st1.display();
}