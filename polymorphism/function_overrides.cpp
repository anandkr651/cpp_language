#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    void print()
    {
        cout << "i am print base class" << endl;
    }
    void display()
    {
        cout << "i am display base class" << endl;
    }
};
class derive : public base
{
public:
    void print()
    {
        cout << "i am print derive class" << endl;
    }
    void display()
    {
        cout << "i am display derive class" << endl;
    }
};
int main()
{
    base *ptr;
    derive der;
    ptr = &der;
    ptr->display();
    ptr->print();
    return 0;
}
/*i am display base class
i am print base class
PS D:\cpp\polymorphism> */

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "i am print base class" << endl;
    }
   virtual void display()
    {
        cout << "i am display base class" << endl;
    }
};
class derive : public base
{
public:
    void print()
    {
        cout << "i am print derive class" << endl;
    }
    void display()
    {
        cout << "i am display derive class" << endl;
    }
};
int main()
{
    base *ptr;
    derive der;
    ptr = &der;
    ptr->display();
    ptr->print();
    return 0;
}
/*i am display derive class
i am print derive class  
PS D:\cpp\polymorphism>*/