#include "iostream"
using namespace std;

class Fruit{
    private:
        string name;
    public:
        Fruit(string name):name{name}
        {}
        string getCent(){
            return name;
        }
};

void fruitName(Fruit fru){
    cout<<fru.getCent();
}

int main(){    
    fruitName(Fruit("Apple")); // sending obj without ObjName
}