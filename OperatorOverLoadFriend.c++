#include "iostream"
using namespace std;

class Add{
    private:
        int a;
    public:
        Add(int val): a{val}{}
        friend Add operator +(Add &obj1, Add &obj2);
        int getSum(){
            return a;
        }
};

Add operator +(Add &obj1, Add &obj2) // operator~keyword ,'+'~sign to overload
{
    return Add{obj1.a + obj2.a};
}

int main(){
    Add obj1(8);
    Add obj2(6);

    Add sum{obj1 + obj2};
    cout<<sum.getSum();
}