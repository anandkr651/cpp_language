#include <iostream>
using namespace std;

// forward decelaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};

class complex
{
    int a, b;
    // individually decelaring function as friend
    //  friend int calculator ::sumrealcomplex(complex, complex);
    //  friend int calculator ::sumcomcomplex(complex, complex);
    // #######################  or #####################]
    // aliter: declaring the entire calculator class as friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcomcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    o1.printnumber();
    o2.printnumber();

    calculator calc, com;
    int res = calc.sumrealcomplex(o1, o2);
    int ult = com.sumcomcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    cout << "the sum of real part of o1 and o2 is " << ult << endl;
}
/*your number is 1 + 4i
your number is 5 + 7i
the sum of real part of o1 and o2 is 6
the sum of real part of o1 and o2 is 11
PS C:\Users\DELL\OneDrive\Desktop\c++> */