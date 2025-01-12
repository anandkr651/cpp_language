#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "In Base class constructor" << endl;
    }
    virtual ~Base()
    {
        cout << "In Base class destructor" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "In Derived class constructor" << endl;
    }
    ~Derived()
    {
        cout << "In Derived class destructor" << endl;
    }
};
int main()
{
    Base *b;
    b = new Derived;
    delete b;
    return 0;
}
/*In Base class constructor
In Derived class constructor
In Derived class destructor
In Base class destructor
PS C:\Users\DELL\OneDrive\Desktop\c++>*/