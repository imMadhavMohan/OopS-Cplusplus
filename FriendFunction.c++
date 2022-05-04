#include"iostream"
using namespace std;

class Box{
    private: int a;
    public: 
        Box(int val):a(val){}
        friend int AddBox(Box);
        friend int min(Box, Box);
};

int AddBox(Box b){
    return b.a+10;
}

int min(Box A, Box B){
    return A.a>B.a? A.a:B.a;
}

int main(){
    Box b(10);
    Box a(20);
    cout << AddBox(a) << endl;
    cout<<min(a, b);
}