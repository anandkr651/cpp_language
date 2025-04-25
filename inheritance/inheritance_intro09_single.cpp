//******************************** single inheritance ***********************

#include <iostream>
using namespace std;

class base
{
    int data1, p = 80;

public:
    int data2, d = 90;
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};

class derived : public base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * getdata1();
    }
    void display()
    {
        // cout << "value of p "<<p<<endl;             //because p is the private
        cout << "value of data 1 is " << getdata1() << endl;
        cout << "value of data 2 is " << data2 << endl;
        cout << "value of data 3 is " << data3 << endl;
    }
};
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
}
/*value of data 1 is 10
value of data 2 is 20
value of data 3 is 200
PS C:\Users\DELL\OneDrive\Desktop\c++>*/