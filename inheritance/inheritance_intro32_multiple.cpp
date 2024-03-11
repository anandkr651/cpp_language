#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kaise ho aap" << endl;
    }
};
class derived : public base1, public base2
{
    int a = 10;

public:
    void greet()
    {
        base2 ::greet();
    }
};
class b1
{
public:
    void say()
    {
        cout << "hello world";
    }
};
class d1 : public b1
{
    int a;
};
int main()
{
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();
    derived der;
    der.greet();
    der.base2 ::greet();
    d1 d;
    d.say();
    return 0;
}
/*how are you
kaise ho aap
kaise ho aap
kaise ho aap
hello world
PS C:\Users\DELL\OneDrive\Desktop\c++> */