#include"iostream"
using namespace std;

class square{
    private:
        static int a;int b;
    public:
        square(){
            b = (a++);
        }
        int display() const{
            return b;
        }
};

int square::a{1};

int main(){
    square sqr1;
    square sqr2;
    cout<<sqr1.display();
    cout<<'\n'<<sqr2.display();
}