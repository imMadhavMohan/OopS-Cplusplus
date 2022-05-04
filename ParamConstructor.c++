#include <iostream>
using namespace std;

class MotorBike{
    public:
        string name;
        string engineId;
        int price;
        int avg;
        MotorBike(string name, string engineId, int price, int avg){
            this->name = name;
            this->engineId = engineId;
            this->price = price;
            this->avg = avg;
        }
        void display(){
            cout<<name<<" "<<engineId<<" "<<price<<" "<<avg;
        }
};

int main(){
    MotorBike Honda = MotorBike("Hero Honda", "H-12", 56000, 62);
    Honda.display();
}