// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     Base()
//     {
//         cout << "Base's 0-arg Ctor" << endl;
//     }
//     Base(int xx)
//     {
//         cout << "Base's 1-arg Ctor" << endl;
//     }
// };
// class Der : public Base
// {
// public:
//     Der()
//     {
//         cout << "Der's 0-arg Ctor" << endl;
//     }
//     Der(int x) : Base(x)    // important
//     {
//         cout << "Der's 1-arg Ctor" << endl;
//     }
// };
// int main()
// {
//     Der y;
//     Der z(10);
// }
/*Base's 0-arg Ctor
Der's 0-arg Ctor
Base's 1-arg Ctor
Der's 1-arg Ctor
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

//***********************  both have different output   ********************************
// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     Base()
//     {
//         cout << "Base's 0-arg Ctor" << endl;
//     }
//     Base(int xx)
//     {
//         cout << "Base's 1-arg Ctor" << endl;
//     }
// };
// class Der : public Base
// {
// public:
//     Der()
//     {
//         cout << "Der's 0-arg Ctor" << endl;
//     }
//     Der(int x)   //zero argument constructor of base class get invoke
//     {
//         cout << "Der's 1-arg Ctor" << endl;
//     }
// };
// int main()
// {
//     Der y;
//     Der z(10);
// }
/*Base's 0-arg Ctor
Der's 0-arg Ctor
Base's 0-arg Ctor
Der's 1-arg Ctor
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
class Base
{
protected:
    int i;

public:
    Base()
    {
        i = 4;
    }
};
class Der : public Base
{
private:
    int j;

public:
    Der()
    {
        j = i * 4;
        cout << "j= " << j << endl;
    }
};
int main()
{
    Der d;
}
/*j= 16
PS C:\Users\DELL\OneDrive\Desktop\c++>*/