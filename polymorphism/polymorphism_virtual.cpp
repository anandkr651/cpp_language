#include <iostream>
using namespace std;
class baseclass
{
public:
  int varbase = 1;
 virtual void display()
  {
    cout << "1 displaying the base class variable varbase " << varbase << endl;
  }
};
class derivedclass : public baseclass
{
public:
  int varderived = 2;
  void display()
  {
    cout << "2 displaying base class variable varbase " << varbase << endl;
    cout << "2 displaying derived class variable varderived " << varderived << endl;
  }
};
int main()
{
  baseclass *baseclass_pointer;
  baseclass objbase;
  derivedclass objderived;

  baseclass_pointer = &objderived;

  baseclass_pointer->display();
  return 0;
}
/*2 displaying base class variable varbase 1
2 displaying derived class variable varderived 2
PS C:\Users\DELL\OneDrive\Desktop\c++> */