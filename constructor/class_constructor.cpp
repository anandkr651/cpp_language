// characterstics of constructor
/*
1. it should be declared in the public section of the class.
2. they are automatically invoked whenever the object is created.
3. they cannot return values and do not have return types.
4. it can have default arguments.
5. we cannot refer to their address.
6. two types of constructor are:-
   a. default constructor
   b. parameterized constructor
*/
// ################# creating a constructor #####################

// constructor is a special member function with the same name as of the class.
// it is used to initialize the object of its class.
// it is automatically invoked (call) whenever an object is created.

#include <iostream>
using namespace std;

class complx
{
  int a, b;

public:
  complx(); // constructor deceleration
  void printnumber()
  {
    cout << "your number is " << a << " + " << b << "i" << endl;
  }
};
complx ::complx() // this is a default constructor as it takes no parameters
{
  a = 10;
  b = 20;
}
int main()
{
  complx c;
  c.printnumber();
}
/*your number is 10 + 20i
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include <iostream>
using namespace std;

class complex
{
  int a, b;

public:
  complex(int, int); // constructor deceleration
  void printnumber()
  {
    cout << "your number is " << a << " + " << b << "i" << endl;
  }
};
complex ::complex(int x, int y) // this is a parameterized constructor as it takes two parameters
{
  a = x;
  b = y;
}
int main()
{
  // implicit call
  complex c(4, 6);
  c.printnumber();

  // explicit call
  complex b = complex(5, 7);
  b.printnumber();
}
/*your number is 4 + 6i
your number is 5 + 7i
PS C:\Users\DELL\OneDrive\Desktop\c++> */