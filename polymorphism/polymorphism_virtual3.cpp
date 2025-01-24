#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void speed()
    {
        cout << endl << "In speed of Vehicle";
    }
    virtual void maintenance()
    {
        cout << endl
             << "In maintenance of Vehicle";
    }
       void value()
    {
        cout << endl << "In value of Vehicle";
    }
};

class FourWheeler : public Vehicle
{
public:
    void speed()
    {
        cout << endl << "In speed of FourWheeler";
    }
    void maintenance()
    {
        cout << endl << "In maintenance of FourWheeler";
    }
};

class TwoWheeler : public Vehicle
{
public:
    void speed()
    {
        cout << endl << "In speed of TwoWheeler";
    }
    void maintenance()
    {
        cout << endl << "In maintenance of TwoWheeler";
    }
    void value()
    {
        cout << endl << "In value of TwoWheeler";
    }
};

class AirBorne : public Vehicle
{
public:
    void speed()
    {
        cout << endl<< "In speed of AirBorne";
    }
};

int main()
{
    Vehicle *ptr1;
    Vehicle v;
    ptr1 = &v;

    ptr1->speed();
    ptr1->maintenance();
    ptr1->value();


    Vehicle *ptr2, *ptr3, *ptr4;

    FourWheeler maruti;
    TwoWheeler bajaj;
    AirBorne jumbo;

    ptr2 = &maruti;
    ptr3 = &bajaj;
    ptr4 = &jumbo;

    ptr2->speed();
    ptr2->maintenance();

    ptr3->speed();
    ptr3->maintenance();

    ptr4->speed();
    ptr4->maintenance();

    ptr2->value();
    ptr3->value();

    Vehicle w;
    w.speed();

    FourWheeler f;
    f.speed();

    AirBorne a;
    a.maintenance();
    return 0;
}
/*In speed of Vehicle
In maintenance of Vehicle    
In value of Vehicle

In speed of FourWheeler      
In maintenance of FourWheeler

In speed of TwoWheeler       
In maintenance of TwoWheeler 

In speed of AirBorne
In maintenance of Vehicle  

In value of Vehicle
In value of Vehicle

In speed of Vehicle
In speed of FourWheeler
In maintenance of Vehicle
PS C:\Users\DELL\OneDrive\Desktop\c++> */