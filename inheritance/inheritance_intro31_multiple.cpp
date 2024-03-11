#include <cmath>
#include <iostream>
using namespace std;

class simple
{
protected:
    float x, y;

public:
    void set_data(int a, int b)
    {
        x = a;
        y = b;
    }
    void display();
};
void simple ::display()
{
    cout << "addition of two number " << x + y << endl;
    cout << "substraction of two number " << x - y << endl;
    cout << "multiply of two number " << x * y << endl;
    cout << "divide of two number " << x / y << endl;
}
class scientific
{
protected:
    int x, y;

public:
    void set_data(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "the squate root of first number " << sqrt(x) << endl;
        cout << "the square root of second number " << pow(y, 2) << endl;
        cout << "the cube root of first number " << cbrt(x) << endl;
        cout << "the cube root of second number " << cbrt(y) << endl;
    }
};
class result : public simple, public scientific
{
public:
    void set(int q, int w)
    {
        simple::set_data(q, w);
        simple::display();
        scientific::set_data(q, w);
        scientific::display();
    }
};
int main()
{
    int a, s;
    cout << "enter the two number";
    cin >> a >> s;
    result man;
    man.set(a, s);
    return 0;
}
/*enter the two number4
6
addition of two number 10
substraction of two number -2
multiply of two number 24
divide of two number 0.666667
the squate root of first number 2
the square root of second number 36
the cube root of first number 1.5874
the cube root of second number 1.81712
PS C:\Users\DELL\OneDrive\Desktop\c++>*/