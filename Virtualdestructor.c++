#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base() // note: virtual
    {
         cout << "Calling ~Base()\n";
    }
};

class Derived : public Base
{
private:
    int *m_array;

public:
    Derived(int length)
        : m_array{new int[length]}
    {
    }

    virtual ~Derived() // note: virtual
    {
         cout << "Calling ~Derived()\n";
        delete[] m_array;
    }
};

int main()
{
    Derived *derived{new Derived(5)};
    Base *base{derived};

    delete base;

    return 0;
}