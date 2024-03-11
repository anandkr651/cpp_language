// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     void setdata(int a)
//     {
//         a=a;
//     }
//     void getdata()
//     {
//         cout<<"the value of a is "<<a<<endl;
//     }
// };
// int main()
// {
//     A a;
//     a.setdata(32);
//     a.getdata();
//     return 0;
// }
/*the value of a is 0
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     void setdata(int a)
//     {
//        this->a=a;
//     }
//     void getdata()
//     {
//         cout<<"the value of a is "<<a<<endl;
//     }
// };
// int main()
// {
//     A a;
//     a.setdata(32);
//     a.getdata();
//     return 0;
// }
/*the value of a is 32
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A &setdata(int a)
    {
        this->a = a;
        return *this;
    }
    void getdata()
    {
        cout << "the value of a is " << a << endl;
    }
};
int main()
{
    A a, b;
    b = a.setdata(32);
    b.getdata();
    a.setdata(32).getdata(); // setdata return the object
    a.getdata();
    return 0;
}
/*the value of a is 32
the value of a is 32
the value of a is 32
PS C:\Users\DELL\OneDrive\Desktop\c++> */