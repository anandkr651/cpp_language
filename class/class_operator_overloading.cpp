#include <iostream>
using namespace std;

class complex
{
private:
    float real, imag;

public:
    complex(){}
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    void displaydata()
    {
        cout << "real = " << real << "imaginary = " << imag << endl;
    }
    void addcomplex(complex x, complex y)
    {
        real = x.real + y.real;
        imag = x.imag + y.imag;
    }
    complex addcomplex(complex y)
    {
        complex t;
        t.real = real + y.real;
        t.imag = imag + y.imag;
        return (t);
    }
    complex operator+(complex y)
    {
        complex t;
        t.real = real + y.real;
        t.imag = imag + y.imag;
        return (t);
    }
};

int main()
{
    complex c1(1.1f, 2.2f), c2(3.5f, 4.4f), c3, c4, c5;
    c3.addcomplex(c1, c2);
    c3.displaydata();
    c4 = c1.addcomplex(c2);
    c4.displaydata();
    c5 = c1 + c2;
    c5.displaydata();
}

/*real = 4.6imaginary = 6.6
real = 4.6imaginary = 6.6
real = 4.6imaginary = 6.6
PS C:\Users\DELL\OneDrive\Desktop\c++\book> */