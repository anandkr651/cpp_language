/*#include<iostream>
using namespace std;

struct employee
{
char name[20];
int age;
float salary;
};

void displayVal (employee);
void displayAddr (employee *);
void displayRef (employee &);

int main()
{
employee e = {"Sanjay", 32, 3200.00};
displayVal (e);
displayAddr (&e);
displayRef (e);
return 0;
}
void displayVal (employee e)
{
cout << e.name << "\t" << e.age << "\t" << e.salary << endl;
}
void displayAddr (employee *p)
{
cout << p->name << "\t" << p->age << "\t" << p->salary <<
endl;
}
void displayRef (employee &p)
{
cout << p.name <<"\t"<< p.age << "\t" << p.salary << endl;
}*/

#include <iostream>
using namespace std;

struct emp
{
    char name[20];
    int age;
    float sal;
};

emp e1 = {"Amol", 21, 2345.00};
emp e2 = {"Ajay", 23, 4500.75};
emp &fun();

int main()
{
    fun() = e2;
    cout << e1.name << "\t" << e1.age << "\t" << e1.sal <<"elo"<< endl;
    return 0;
}
emp &fun()
{
    cout << e1.name << "\t" << e1.age << "\t" << e1.sal <<"cat"<< endl;
    return e1;
}
/*Amol    21      2345cat
Ajay    23      4500.75elo
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/
