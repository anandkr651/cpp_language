#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}

class derived : private base // private visibility mode : public member of the base class become private members of the drived class
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    setdata(); // important
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "value of data 1 is " << getdata1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}
int main()
{
    derived der;
    // der.setdata();
    der.process();
    der.display();
}
/*value of data 1 is 10
value of data 2 is 20
value of data 3 is 200
PS C:\Users\DELL\OneDrive\Desktop\c++> */