#include <iostream>
using namespace std;
class a
{
public:
  void fun1()
  {
    cout << "inside the fun1" << endl;
  }
};
class b : public a
{
public:
  void fun2()
  {
    cout << "inside the fun2" << endl;
  }
};
class c : public a
{
public:
  void fun3()
  {
    cout << "inside the fun3" << endl;
  }
};

int main()
{
  a obj1;
  obj1.fun1();
  cout << endl;

  b obj2;
  obj2.fun1();
  obj2.fun2();
  cout << endl;

  c obj3;
  obj3.fun1();
  obj3.fun3();
  cout << endl;
}
/*inside the fun1

inside the fun1
inside the fun2

inside the fun1
inside the fun3

PS C:\Users\DELL\OneDrive\Desktop\c++\inheritance>*/