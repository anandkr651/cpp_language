// ######################## types of inheritance ################################
/*single inheritance - one parents one child
multiple inheritance - more than one parents one child
multilevel inheritance - grand_father --> father --> son
hierarchical inheritance - one parents more than one child
hybrid inheritance - hierarchical inheritance +  multiple inheritance
*/

#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee() {}  //Because C++ needs to construct the base class part of the object first. If you don’t tell it which constructor to use, it assumes the default one.
};

// derived class syntax
/*class {{derived class name}} : {{visibility mode}} {{base class name}}
{
    class member/method.etc.....
}
note :-
1.default visibility mode is private
2.public visibility mode : public member of the base class become public members of the drived class
3.private visibility mode : public member of the base class become private members of the drived class
4.private member are never inherited*/

// creating a programmer class derived from employee base class

class programmer : public employee
{
public:
    int languagecode;
    programmer(int inpid)
    {
        id = inpid;
        languagecode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(10);
    cout << skillf.languagecode << endl;
    cout << skillf.id << endl;
    skillf.getdata();
}
/*34
34
9
10
10
PS C:\Users\DELL\OneDrive\Desktop\c++>*/