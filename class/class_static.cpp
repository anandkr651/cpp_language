/*#include<iostream>
using namespace std;
class a
{
    private:
    int x;
    static int y;
    public:
    void getdata(int a)
    {
        x=a;
        cout<<"x ="<<x<<endl;
    }
    int show()
    {
        ++y;
        return y;
    }
};
int a ::y=0;
int main()
{
    a t,s,r;
    t.getdata(10);
    cout<<"y ="<<t.show()<<endl;
    s.getdata(20);
    cout<<"y ="<<s.show()<<endl;
    r.getdata(30);
    cout<<"y ="<<r.show()<<endl;
    return 0;
}*/
/*x =10
y =1
x =20
y =2
x =30
y =3
PS C:\Users\DELL\OneDrive\Desktop\c++\college>*/

// #include<iostream>
// using namespace std;
// class a
// {
//     private:
//     static int y;
//     public:
//     void show(int);
//     static void getdata(int a)
//     {
//         y=a;
//         ++y;
//         cout<<"y="<<y<<endl;
//     }
// };
// int a ::y=0;
// void a ::show(int b)
// {
//     int x;
//     x=b;
//     cout<<"x ="<<x<<endl;
// }
// int main()
// {
//     a t;
//     a ::getdata(10);
//     t.show(15);
//     return 0;
// }
/*y=11
x =15
PS C:\Users\DELL\OneDrive\Desktop\c++\college*/

#include <iostream>
using namespace std;
class Circle
{
private:
    char color;
    float radius;
    static int count;

public:
    Circle(char c, float r)
    {
        color = c;
        radius = r;
        count++;
    }
    static void showCount()
    {
        cout << "count =" << count << endl;
    }
};
int Circle::count = 0; // definition of count
int main()
{
    Circle c1('R', 1.2f);
    Circle::showCount();
    Circle c2('G', 2.2f);
    Circle::showCount();
    Circle c3('B', 3.2f);
    Circle::showCount();
    return 0;
}
/*count =1
count =2
count =3
PS C:\Users\DELL\OneDrive\Desktop\c++> */