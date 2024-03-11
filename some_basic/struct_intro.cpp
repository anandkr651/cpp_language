/*#include<iostream> 
using namespace std;

struct add
{
    int x, y;
    void sum()
    {
        cout << "enter the two number";
        cin >> x >> y;
        cout << "sum " << (x + y);
    }
};
int main()
{
    add a;
    a.sum();
    a.x = 50;
    a.y = 60;
    cout << "sum " << (a.x + a.y);
}
* /
/*enter the two number5
9
sum 14sum 110
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

// ################### use scope resolution operator #########################

/*#include <iostream>
    using namespace std;

struct add
{
    int x, y;
    void sum();
};
void add::sum()
{
    cout << "enter the two number";
    cin >> x >> y;
    cout << "sum " << (x + y);
}
int main()
{
    add a;
    a.sum();
}
* /
/*enter the two number4
9
sum 13
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

/*#include <iostream>
    using namespace std;

struct add
{
private:
    int x, y;

public:
    void sum()
    {
        cout << "enter the two numnber";
        cin >> x >> y;
        cout << "sum " << (x + y);
    }
};
int main()
{
    add a;
    a.sum();
    // a.x=50;              //we can not initilize because x and y is the private member
    // a.y=60;
    // cout<<"sum "<<(a.x+a.y);
}
* /
/*enter the two numnber4
8
sum 12
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
    using namespace std;

struct add
{
private:
    int x, y;

public:
    void sum();
};
void add ::sum()
{
    cout << "enter the two number";
    cin >> x >> y;
    cout << "sum " << (x + y);
}
int main()
{
    add a;
    a.sum();
}

/*enter the two number5
8
sum 13
PS C:\Users\DELL\OneDrive\Desktop\c++>*/