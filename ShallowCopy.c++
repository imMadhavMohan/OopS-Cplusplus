#include <iostream>
using namespace std;

class box{
    private:
        int l;
        int *b;
        int h;
    public:
        box(){
            b = new int;
        }
        box(box &obj){
            this->l =  obj.l;            
            *(this->b) = *(obj.b);
            this->h = obj.h;
        }
        void set(int l,int b,int h){
            this->l = l;
            *(this->b) = b;
            this->h = h;
        }
        void display(){
            cout<<l<<" "<<b<<" "<<h<<" ";
        }
        ~box(){
            delete b;
        }
};


int main(){
    box b1;
    b1.set(12, 13, 14);
    b1.display();

    box b2 = b1;
    b2.display();
}