#include "iostream"
using namespace std;

enum colors
{
    red = 5,
    black
};
enum suit
{
    heart,
    diamond = 8,
    spade = 3,
    club
};

int main(){
    cout<<red<<" "<<heart<<" "<<club;
}