#include <iostream>
using namespace std;

class box{
    private:
        int l;
        int b;
        int h;
    public:
        void setInfo(int l, int b, int h){ // no constructor is used rather fun is used 
            this->l = l;    // to initialize obj
            this->b = b;
            this->h = h;
        }
        void display(){
            cout<<l<<" "<<b<<" "<<h<<" ";
        }        
};

int main(){
    box b1;
    b1.setInfo(12, 13, 14);   
    b1.display();

    box b2 = b1;
    b2.display();
}