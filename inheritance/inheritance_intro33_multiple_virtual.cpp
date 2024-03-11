/*why we should used virtual keyword
in c++ the `virtual` keyword is used in multiple inheritance to indicate that a base class function should 
be treated as a virtual function, allowing for proper polymorphic behavior when dealing with derived classes.

when a class is derived from multiple base classes and these base classes have a comman ancestor with a virtual
function, using the `virtual` keyword ensures that the derived class overrides that function correctly. this 
helps in resolving ambiguities that may arise due to multiple inheritance as it ensures that correct version of
the function from the most derived class is called .
without the `virtual` keyword, the deived class might end up with multiple instances of the base class function
leading to ambiguity and potential error in the program. using `virtual` help in acheving a more predictable 
and desired behavior when working with polymorphism and multiple inheritance in c++*/


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