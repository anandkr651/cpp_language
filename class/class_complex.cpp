#include <iostream>
using namespace std;

class complx
{
    int a,b,c,l,q,w;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complx o1, complx o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
    void setdatabysum(complx o2)
    {
         q = a+o2.a;
         w = b+o2.b;
    }
    void printnumbersum()
    {
        cout << "your complex number is " << q << " + " << w << "i" << endl;
    }
    void multiply(complx o2)
    {
         c= (a*o2.a)-(b*o2.b);
         l= (a*o2.b)+(b*o2.a);
    }
    void printnumbermul()
    {
        cout << "your complex number is " << c << " + " << l << "i" << endl;
    }
};

int main()
{
    complx c1, c2, c3;
    c1.setdata(4, 5);
    c1.printnumber();

    c2.setdata(6, 7);
    c2.printnumber();

    c3.setdatabysum(c1, c2);
    c3.printnumber();

    c1.setdatabysum(c2);
    c1.printnumbersum();

    c1.multiply(c2);
    c1.printnumbermul();

}
/*your complex number is 4 + 5i
your complex number is 6 + 7i
your complex number is 10 + 12i
your complex number is 10 + 12i
your complex number is -11 + 58i
PS C:\Users\DELL\OneDrive\Desktop\c++\class>*/