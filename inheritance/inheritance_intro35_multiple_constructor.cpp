#include <iostream>
using namespace std;

/*syntax foe initialization list in constructor
constructor (argument-list) : initilization-section
{
    assigment + other code;
}
class test{
    int a;
    int b;
    public:
    test(int i,int j):a(i),b(j){constructor-body}
};
*/

class test
{
    int a;
    int b;

public:
    // test(int i,int j):a(i),b(j)
    // test(int i,int j):a(i),b(i+j)
    // test(int i,int j):a(i),b(2+j)
    // test(int i,int j):a(i),b(a+j)
    // test(int i,int j):b(j),a(i+j)
    // test(int i,int j):b(j),a(i+b)  //########### jab ham upar mi int b uske bad int a tab output
    //  test(int i,int j):b(j),a(i+b)
    test(int i, int j)
    {
        b = j;
        a = i;
        cout << "constructor executed" << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};
int main()
{
    test(4, 6);
}

/*constructor executed
value of a is 4
value of b is 6
PS C:\Users\DELL\OneDrive\Desktop\c++>

constructor executed
value of a is 4
value of b is 10
PS C:\Users\DELL\OneDrive\Desktop\c++>

constructor executed
value of a is 4
value of b is 8
PS C:\Users\DELL\OneDrive\Desktop\c++>

constructor executed
value of a is 4
value of b is 10
PS C:\Users\DELL\OneDrive\Desktop\c++>

constructor executed
value of a is 10
value of b is 6
PS C:\Users\DELL\OneDrive\Desktop\c++>

constructor executed
value of a is 10
value of b is 6
PS C:\Users\DELL\OneDrive\Desktop\c++>

constructor executed
value of a is 4
value of b is 6
PS C:\Users\DELL\OneDrive\Desktop\c++>

constructor executed
value of a is 4
value of b is 6
PS C:\Users\DELL\OneDrive\Desktop\c++>

constructor executed
value of a is 4
value of b is 6
PS C:\Users\DELL\OneDrive\Desktop\c++>
*/