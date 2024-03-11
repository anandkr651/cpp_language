#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4, 5);
    c1.printnumber();

    complex c2(9);
    c2.printnumber();

    complex c3;
    c3.printnumber();
}
/*your number is 4 + 5i
your number is 9 + 0i
your number is 0 + 0i
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;

class complx
{
    int a, b;

public:
    complx(int x, int y = 9)     //default constructor
    {
        a = x;
        b = y;
    }
    void printnumber();
};
void complx ::printnumber()
{
    cout << "your number is " << a << " + " << b << "i" << endl;
}
int main()
{
    complx c2(9);
    c2.printnumber();
    complx c3(3, 5);
    c3.printnumber();
}
/*your number is 9 + 9i
your number is 3 + 5i
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;

class a
{
    int x, y, z;

public:
    a(int, int = 10, int = 15);
    void show();
};
a::a(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void a::show()
{
    cout << "x " << x << " y " << y << " z " << z << endl;
}
int main()
{
    a t(10, 20, 30), z(5, 15), s(17);
    t.show();
    z.show();
    s.show();
    return 0;
}
/*x 10 y 20 z 30
x 5 y 15 z 15
x 17 y 10 z 15
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include <iostream>
using namespace std;

class a
{
    int x, y, z;

public:
    a(int a, int b = 10, int c = 15)
    {
        x = a;
        y = b;
        z = c;
    }
    void show()
    {
        cout << "x " << x << " y " << y << " z " << z << endl;
    }
};
int main()
{
    a t(10, 20, 30), z(5, 15), s(17);
    t.show();
    z.show();
    s.show();
    return 0;
}
/*x 10 y 20 z 30
x 5 y 15 z 15
x 17 y 10 z 15
PS C:\Users\DELL\OneDrive\Desktop\c++> */