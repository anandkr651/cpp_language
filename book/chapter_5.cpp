#include <iostream>
#include <string.h>
using namespace std;
class Carburettor
{
private:
    char type;
    float cost;
    string mfr;

public:
    void setData(char t, float c, string m)
    {
        type = t;
        cost = c;
        mfr = m;
    }
    void displayData()
    {
        cout << type << endl
             << cost << endl
             << mfr << endl;
    }
};
class Car
{
private:
    string model;
    string drivetype;
    Carburettor cc;          // embedded object
public:
    void setData(char t, float c, string mf, string m, string d)
    {
        model = m;
        drivetype = d;
        cc.setData(t, c, mf);
    }
    void displayData()
    {
        cout << model << endl
             << drivetype << endl;
        cc.displayData();
    }
};
int main()
{
    Car mycar;
    mycar.setData('A', 18500.00, "Mico", "Sports", "4-wheel");
    mycar.displayData();
    return 0;
}
/*Sports
4-wheel
A
18500
Mico
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
class Sample2;
class Sample1
{
private:
    int data1;

public:
    Sample1()
    {
        data1 = 100;
    }
    friend void accessOne(Sample1);
    friend void accessBoth(Sample1, Sample2);
};
class Sample2
{
private:
    int data2;

public:
    Sample2()
    {
        data2 = 200;
    }
    friend void accessBoth(Sample1, Sample2);
};
void accessOne(Sample1 x)
{
    cout << x.data1 << endl;
}
void accessBoth(Sample1 x, Sample2 y)
{
    cout << x.data1 + y.data2 << endl;
}
int main()
{
    Sample1 a;
    Sample2 b;
    accessOne(a);
    accessBoth(a, b);
    return 0;
}
/*100
300
PS C:\Users\DELL\OneDrive\Desktop\c++\book> */