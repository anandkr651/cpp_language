/*polymorphism
--one name and multiple forms
--eg. function overloading , operator overloading
--eg. virtual overloading

polymorphism in c++ can be of two types:
1.compile time polymorphism/static polymorphism
  compile time polymorphism in c++ is acheived using
     1.1 function overloading
     1.2 operator overloading
2. run tim polymorphism/dynamic polymorphism
  run time polymorphism in c++ is acheived using
    2.1 virtual overloading
*/
#include<iostream>
using namespace std;
class baseclass{
    public:
      int varbase;
      void display()
      {
        cout<<"displaying the base class variable varbase "<<varbase<<endl;
      }
};
class derivedclass : public baseclass{
    public:
    int varderived;
    void display()
    {
        cout<<"displaying base class variable varbase "<<varbase<<endl;
        cout<<"displaying derived class variable varderived "<<varderived<<endl;
    }
};
int main()
{
    baseclass *baseclass_pointer;
    derivedclass objderived;

    baseclass_pointer = &objderived; //pointing to base class pointer to derived class

    baseclass_pointer ->varbase=34;
    baseclass_pointer ->display();
   // baseclass_pointer->varderived=45;  //error

   derivedclass *derivedclass_pointer;
   derivedclass_pointer = &objderived;
   derivedclass_pointer->varbase=78;
   derivedclass_pointer ->varderived=98;

   derivedclass_pointer->display();
}
/*displaying the base class variable varbase 34  
displaying base class variable varbase 78      
displaying derived class variable varderived 98
PS C:\Users\DELL\OneDrive\Desktop\c++>*/