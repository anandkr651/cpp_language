#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class derivedc: visibility mode base1 , visibility mode base2
//  {
//      class body of class "derivedc"
//  };

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base1 is " << base1int << endl;
        cout << "the value of base2 is " << base2int << endl;
        cout << "the sum of these value is " << base1int + base2int << endl;
    }
};
/*the inherited derived class will look something like this:
data member
     base1int ---> protected
     base2int ---> protected
member function
      set_base1int ---> public
      set_base2int ---> public
      show ----> public
*/
int main()
{
    derived harry;
    harry.set_base1int(10);
    harry.set_base2int(20);
    harry.show();
    return 0;
}
/*the value of base1 is 10
the value of base2 is 20
the sum of these value is 30
PS C:\Users\DELL\OneDrive\Desktop\c++> */