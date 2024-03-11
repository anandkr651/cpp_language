#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter the three number";
    cin>>x>>y>>z;
    if(x>y)
    {
        if(x>z)
        cout<<"x is greatest no "<<x;
        else
        cout<<"z is greatest no "<<z;
    }
    else{
        if(y>z)
        cout<<"y is greatest no "<<y;
        else
        cout<<"z is greatest no "<<z;
    }
}
/*enter the three number3
5
4
y is greatest no 5
PS C:\Users\DELL\OneDrive\Desktop\c++>*/