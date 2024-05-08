#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;

public:
    int c;
};

/*
for a protected member:
                         public derivation    private derivation    protected derivation
1. private members       not inherited         not inherited        not inherited
2. protected members     protected             private               protected
3. public members         public               private               protected
*/

class derived : private base
{
};

int main()
{
    base x;
    derived y;
    // cout << x.a; // will not work since a is protected in both base as well as derived class
}
/*PS C:\Users\DELL\OneDrive\Desktop\c++> */