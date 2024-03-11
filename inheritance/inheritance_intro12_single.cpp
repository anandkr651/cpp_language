#include <iostream>
using namespace std;
class Ex
{
public:
    void fun()
    {
        cout << "Inside Ex - fun()" << endl;
    }
    void save()
    {
        cout << "Inside Ex - save()" << endl;
    }
    void enc()
    {
        cout << "Inside Ex - enc()" << endl;
    }
    void open()
    {
        cout << "Inside Ex - open()" << endl;
    }
};
class NewEx : public Ex
{
public:
    void save()
    {
        cout << "Inside NewEx - save()" << endl;
    }
    void enc()
    {
        cout << "Inside NewEx - enc()" << endl;
    }
    void autoUpdate()
    {
        cout << "Inside NewEx - autoUpdate()" << endl;
    }
    void open()
    {
        cout << "Inside NewEx - open()" << endl;
        Ex::open();          //we can access the base class member function
    }
};
int main()
{
    NewEx e;
    e.fun();
    e.save();
    e.enc();
    e.autoUpdate();
    e.open();
}
/*Inside Ex - fun()
Inside NewEx - save()
Inside NewEx - enc()
Inside NewEx - autoUpdate()
Inside NewEx - open()
Inside Ex - open()
PS C:\Users\DELL\OneDrive\Desktop\c++>*/