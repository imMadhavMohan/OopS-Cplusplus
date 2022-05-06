#include <iostream>
using namespace std;

class Add{
    private: 
        int val;
    public:
        Add(int a): val{a}{}
        int square();                   
};

inline int cube(int a){
    return a*a*a;
}

inline int Add::square()
{
    return val*val;
}

int main(){
    Add obj(4);
    cout<< obj.square();

    cout<<'\n'<< cube(4); // here, cube(4) ~= return 4*4*4
}