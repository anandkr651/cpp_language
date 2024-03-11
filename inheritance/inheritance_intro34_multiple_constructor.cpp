/*
case 1:
class b:public a{
   // order of execution of constructor -->first a() then b()
}

case2:
class a:public b,public c{
   // order of execution of constructor -->first b() then c() and a()
}


//************************* it is a special case of constructor ******************************
case3:
class a:public b,virtual public c{
   // order of execution of constructor -->first c() then b() and a()
}
*/
/*#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void printdatabase1()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void printdatabase2()
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
    }
    void printdata()
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    derived d(1, 2, 3, 4);
    d.printdatabase1();
    d.printdatabase2();
    d.printdata();
    return 0;
}
* /
/*base1 class constructor called
base2 class constructor called
the value of data1 is 1
the value of data2 is 2
the value of derived1 is 3
the value of derived2 is 4
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
    using namespace std;
class base1
{
    int data1;

public:
    base1()
    {
        cout << "base1 class constructor zero argument" << endl;
    }
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void printdatabase1()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class base2 : virtual public base1
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void printdatabase2()
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};
class base3 : virtual public base1
{
    int data3;

public:
    base3(int i)
    {
        data3 = i;
        cout << "base3 class constructor called" << endl;
    }
    void printdatabase3()
    {
        cout << "the value of data3 is " << data3 << endl;
    }
};
class derived : public base2, virtual public base1, public base3
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d, int e) : base1(a), base2(b), base3(e)
    {
        derived1 = c;
        derived2 = d;
    }
    void printdata()
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    derived d(1, 2, 3, 4, 5);
    d.printdatabase1();
    d.printdatabase2();
    d.printdatabase3();
    d.printdata();
    return 0;
}
/*base1 class constructor called
base2 class constructor called
base3 class constructor called
the value of data1 is 1
the value of data2 is 2
the value of data3 is 5
the value of derived1 is 3
the value of derived2 is 4
PS C:\Users\DELL\OneDrive\Desktop\c++>*/