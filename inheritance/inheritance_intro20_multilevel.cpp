/*  if we inheriting b from a and c from b:[a --->b---->c]
    a is the base class for b and b is the base class for c
    a--->b--->c is called inheritance path
*/

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};
void student ::set_roll_no(int m)
{
    roll_no = m;
}
void student ::get_roll_no()
{
    cout << "roll no of the student is " << roll_no << endl;
}

class exam : public student
{
protected:
    float math, physic;

public:
    void set_marks(float, float);
    void get_marks();
};
void exam ::set_marks(float a, float b)
{
    math = a;
    physic = b;
}
void exam ::get_marks()
{
    cout << "the marks obtain in math is " << math << endl;
    cout << "the marks obtain in physic is " << physic << endl;
}

class result : public exam
{
    float percentage;

public:
    void display();
};
void result ::display()
{
    get_roll_no();
    get_marks();
    cout << "your percentage is " << (math + physic) / 2 << "%" << endl;
}

int main()
{
    result herry;
    herry.set_roll_no(4);
    herry.set_marks(78, 90);
    herry.display();
    return 0;
}
/*roll no of the student is 4
the marks obtain in math is 78
the marks obtain in physic is 90
your percentage is 84%
PS C:\Users\DELL\OneDrive\Desktop\c++>*/