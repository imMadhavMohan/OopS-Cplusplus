#include "iostream"
using namespace std;

class grandFather{
    public:
        void GIam(){
            cout<<"I'm GrandFather\n";
        }
};

class Father{
    public:
        void fIam(){
            cout<<"I'm Father\n";
        }
};

class child: public grandFather, public Father{
    
};

int main(){
    child myDear;
    myDear.GIam();
    myDear.fIam();    
}