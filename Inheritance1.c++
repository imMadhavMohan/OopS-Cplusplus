#include "iostream"
using namespace std;

class vehicle{
    public:
        string name="V-Motor";
     
        void Honk(){
            cout<<"Hurr-Hurr";
        }
};

class Honda : public vehicle{
public:
    void Honk()
    {
        cout << "Ho-Ho";
    }
    // name = "S-Motor";
};

int main(){
    Honda myCar;
    myCar.Honk();
    cout<<myCar.name;

    vehicle myDream; // will call parent class method
    myDream.Honk();
}