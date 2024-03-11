#include<iostream>
using namespace std;
int main()
{
    int x,s=0,d,fd,t;
    cout<<"enter a number";
    cin>>x;
    t=x;
    fd=x%10;
    x=x/10;
    for(;x>0;)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    if(fd==s)
    cout<<"dracula number is "<<t;
    else
    cout<<"not dracula";
}
/*enter a number1236
dracula number is 1236
PS C:\Users\DELL\OneDrive\Desktop\c++>*/