#include <iostream>
using namespace std;

class MotorBike{
    public:
        MotorBike(){ // Parameterized constructor
            cout<<"Hero Honda - 'R-15' - 45000 \n";
        }
};

int main(){
    MotorBike Bike; 
    MotorBike Bike1 = MotorBike();
     return 0;
}