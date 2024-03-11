#include<iostream>
using namespace std;
int main()
{
    int x,y,z,s;
    cout<<"enter the angle of triangle";
    cin>>x>>y>>z;
    s=x+y+z;
    if(s==180)
    cout<<"triangle is valid";
    else
    cout<<"triangle is not valid";
}
/*enter the angle of triangle56
78 
46
triangle is valid
PS C:\Users\DELL\OneDrive\Desktop\c++>*/