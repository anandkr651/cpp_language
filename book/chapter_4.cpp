#include <iostream>
// #include<string.h>
using namespace std;
class Address
{
private:
    string name, city;

public:
    Address(string p, string q)
    {
        name = p;
        city = q;
    }
    void display()
    {
        cout << name << endl
             << city << endl;
    }
};
int main()
{
    Address my("Mac", "London");
    my.display();
    return 0;
}
/*Mac
London
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    Date()
    {
        day = 7;
        month = 9;
        year = 2019;
    }
    void display()
    {
        cout << day << endl
             << month << endl
             << year;
    }
};
int main()
{
    Date today;
    today.display();
    return 0;
}
/*7
9
2019
PS C:\Users\DELL\OneDrive\Desktop\c++\book> */

#include <iostream>
using namespace std;
class Value
{
private:
    int i;
    float f;

public:
    Value()
    {
        i = 0;
        f = 0.0;
    }
};
int main()
{
    Value v1;
    return 0;
}

#include <iostream>
using namespace std;
class Triplets
{
private:
    int t1, t2, t3;

public:
    Triplets() {}
    Triplets(int x, int y, int z)
    {
        t1 = x;
        t2 = y;
        t3 = z;
    }
    void display()
    {
        cout << endl
             << t1 << t2 << t3;
    }
};
int main()
{
    Triplets r(2, 3, 4), s;
    s.display();
    r.display();
    return 0;
}
/*5401629165296
234
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
class Sample
{
private:
    int data1;
    float data2;

public:
    Sample();
    void showData();
};
Sample::Sample()
{
    data1 = 10;
    data2 = 20;
}
void Sample::showData()
{
    cout << endl
         << data1 << data2;
}
int main()
{
    Sample s;
    s.showData();
    return 0;
}
// /*1020
// PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

// #include <iostream>
// using namespace std;
// class List
// {
// private:
//     class Node
//     {
//         int data;
//         Node *link;
//     } *p;

// public:
//     void create()
//     {
//         p = new Node;
//         p.data = 10;
//         p.link = NULL;
//     }
// };
// int main()
// {
//     List l1;
//     l1.create();
//     return 0;
// }
/*no know*/

#include <iostream>
using namespace std;
class User
{
private:
    int i;
    float f;
    char c;

public:
    void displayData()
    {
        cout << i << '\n'
             << f << "\n"
             << c << endl;
    }
};
int main()
{
    cout << sizeof(User) << endl;
    User u1;
    cout << sizeof(u1) << endl;
    u1.displayData();
    return 0;
}
/*12
12
311
0

PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
#pragma pack(1)
using namespace std;
class User
{
private:
    int i;
    float f;
    char c;

public:
    void displayData()
    {
        cout << i << '\n'
             << f << "\n"
             << c << endl;
    }
};
int main()
{
    cout << sizeof(User) << endl;
    User u1;
    cout << sizeof(u1) << endl;
    u1.displayData();
    return 0;
}
/*9
9
0
0

PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
class Dte
{
private:
    int dd, mm, yy;

public:
    Dte()
    {
        cout << "Reached here" << endl;
    }
};
int main()
{
    Dte today;
    Dte *p = &today;
    cout << p << endl;
    return 0;
}
/*Reached here
0x99e0bffb2c
PS C:\Users\DELL\OneDrive\Desktop\c++\book*/

#include <iostream>
using namespace std;
class Student
{
private:
    int m1, m2, m3;
    float per;

public:
    Student()
    {
        m1 = m2 = m3 = 0;
        per = 0.0;
    }
    void calcPer(int x, int y, int z)
    {
        m1 = x;
        m2 = y;
        m3 = z;
        per = (m1 + m2 + m3) / 3.0;
        displayPer();
    }
    void displayPer()
    {
        cout << "Percentage =" << per << "%" << endl;
    }
};
int main()
{
    Student s1;
    s1.displayPer();
    s1.calcPer(35, 35, 35);
    s1.displayPer();
    return 0;
}
/*Percentage =0%
Percentage =35%
Percentage =35%
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
class Control
{
public:
    Control()
    {
        calculate();
        cout << "Constructor" << endl;
    }
    void calculate()
    {
        display();
        cout << "Calculator" << endl;
    }
    void display()
    {
        cout << "displayed" << endl;
    }
};
int main()
{
    Control c1;
    return 0;
}
/*displayed
Calculator
Constructor
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/