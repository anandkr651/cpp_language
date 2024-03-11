#include <iostream>
using namespace std;

class number
{
    int a;
public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // when no copy constructor is found compiler supplies it own copy constructor
    number(number &obj)
    {
        cout << "copy constructor called !!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for the object is " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(x); // copy constructor invoke
    z1.display();

    z2 = z; // copy constructor not invoke

    number z3 = z; // copy constructor invoke
    z3.display();
}
/*the number for the object is 0
the number for the object is 0
the number for the object is 45
copy constructor called !!
the number for the object is 0
copy constructor called !!
the number for the object is 45
PS C:\Users\DELL\OneDrive\Desktop\c++> */