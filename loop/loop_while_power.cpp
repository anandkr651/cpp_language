#include<iostream>
using namespace std;
int main()
{
    int x,y,p=1;
    cout<<"enter the two number";
    cin>>x>>y;
    while(y>=1)
    {
        p=p*x;
        y--;
    }
    cout<<"power is "<<p;
}
/*enter the two number2
3
power is 8
PS C:\Users\DELL\OneDrive\Desktop\c++>*/