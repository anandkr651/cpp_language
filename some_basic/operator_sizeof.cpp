#include <iostream>
using namespace std;
int c = 45;
int main()
{
    int a, b, c;
    cout << "enter the value of a:" << endl; // enter the value of a:
    cin >> a;                                // 1
    cout << "enter the value of b:" << endl; // enter the value of a:
    cin >> b;                                // 2
    c = a + b;
    cout << "the sum is " << c << endl;        // the sum is 3
    cout << "the global c is " << ::c << endl; // the global c is 45

    float d = 34.56;
    long double e = 34.90;
    double f = 34.78;
    cout << "the value of d is " << d << endl;                  // the value of d is 34.56
    cout << "the value of e is " << e << endl;                  // the value of e is 34.9
    cout << "the size of 34.56 is " << sizeof(34.56) << endl;   // the size of 34.56 is 8
    cout << "the size of 34.56f is " << sizeof(34.56f) << endl; // the size of 34.56f is 4
    cout << "the size of 34.56F is " << sizeof(34.56F) << endl; // the size of 34.56F is 4
    cout << "the size of 34.56l is " << sizeof(34.56l) << endl; // the size of 34.56l is 12
    cout << "the size of 34.56L is " << sizeof(34.56L) << endl; // the size of 34.56L is 12

    float x = 455;
    float &y = x; // & is work like a referance variable
    x++;
    cout << x << endl; // 456
    cout << y << endl; // 456

    int m = 45;
    float n = 34.986;
    cout << "the value of m is " << (float)m << endl; // the value of m is 45
    cout << "the value of m is " << float(m) << endl; // the value of m is 45
    cout << "the value of n is " << (int)n << endl;   // the value of n is 34
    cout << "the value of n is " << int(n) << endl;   // the value of n is 34

    return 0;
}
