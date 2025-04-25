/*why we should used virtual keyword
in c++ the `virtual` keyword is used in multiple inheritance to indicate that a base class function should be treated as a virtual function, allowing for proper polymorphic behavior when dealing with derived classes.

when a class is derived from multiple base classes and these base classes have a comman ancestor with a virtual function, using the `virtual` keyword ensures that the derived class overrides that function correctly. this helps in resolving ambiguities that may arise due to multiple inheritance as it ensures that correct version of the function from the most derived class is called . without the `virtual` keyword, the deived class might end up with multiple instances of the base class function leading to ambiguity and potential error in the program. using `virtual` help in acheving a more predictable and desired behavior when working with polymorphism and multiple inheritance in c++*/


/*Your C++ code is a nice demonstration of multiple inheritance, but it currently has a classic issue: diamond problem due to inheriting from the same base class student via two different paths (test and sport). Let's break it down and see what's happening:

❗ Problem: Diamond Inheritance
Both test and sport inherit from student.

result inherits from both test and sport.

So result ends up with two copies of student: one via test, one via sport.

But which set_number() is being called? Since both test and sport have inherited set_number() (and sport overrides it), there's ambiguity.

In your case, set_number(4) is calling the sport::set_number() function (which overwrites roll_no to 5 and prints "anand"), not the one from test's side.

So even though you set roll number as 4, it's showing 5 — because the print_number() used is likely from the test side, but roll_no was set on the sport side.*/

/*
      student
      /     \
   test     sport
      \     /
      result

*/

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "your roll number " << roll_no << endl;
    }
};
class test : virtual public student // set_number is used so we can use virtual keyword
{
protected:
    float math, physic;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physic = m2;
    }
    void print_marks()
    {
        cout << "your result is here" << endl
             << "math " << math << endl
             << "physic " << physic << endl;
    }
};
class sport : virtual public student
{
protected:
    float score;

public:
    void set_number(int a)   //this line should be used virtual keyword
    {
        roll_no = 5;
        cout<<"anand"<<endl;
    }
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "your pt score is " << score << endl;
    }
};
class result : public test, public sport
{
protected:
    float total;

public:
    void display()
    {
        print_marks();
        print_number();
        print_score();
        cout << "total " << math + physic + score << endl;
    }
};
int main()
{
    result harry;
    harry.set_marks(78, 80);
    harry.set_number(4);
    harry.set_score(59);
    harry.display();
    return 0;
}
/*anand
your result is here
math 78
physic 80
your roll number 5
your pt score is 59
total 217
PS C:\Users\DELL\OneDrive\Desktop\c++\inheritance> */