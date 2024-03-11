#include <iostream>
using namespace std;
class Trial
{
public:
    virtual void display()
    {
        cout << endl
             << "In example class";
    }
};
class Sample
{
private:
    int i;

public:
     void display()
    {
        cout << endl
             << "In sample class";
    }
};
// class Trial
// {
// public:
//     virtual void display()
//     {
//         cout << endl
//              << "In example class";
//     }
// };
int main()
{
    Sample s;
    Trial t;
    cout << sizeof(s) << endl
         << sizeof(t);
    return 0;
}
/*16
8
PS C:\Users\DELL\OneDrive\Desktop\c++> */