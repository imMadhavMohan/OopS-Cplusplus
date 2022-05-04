#include"iostream"
using namespace std;

class simple{
    private:
        int myId{};
    public:
        simple(int id):myId{id}{
            cout<<"Constructor-"<<id;
        }
        int getId(){
            return myId;
        }
        ~simple(){
            cout<<"Destructor-"<<myId;
        }
};

int main(){
    simple sim{1};
    cout<<'\n'<<sim.getId()<<'\n';

    simple* simOne{new simple(1)};
    cout<<simOne->getId();
    return 0;
}