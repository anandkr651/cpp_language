#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee harry;
    harry.d = 50;
    harry.e = 60;
    harry.setdata(1, 2, 4);
    harry.getdata();
    return 0;
}
/*the value of a is 1
the value of b is 2
the value of c is 4
the value of d is 50
the value of e is 60
PS C:\Users\DELL\OneDrive\Desktop\c++>*/