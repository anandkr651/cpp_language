#include<iostream>
using namespace std;
int main()
{
    int x,d,s=0,fd,t;
    cout<<"enter a number";
    cin>>x;
    fd=x%10;
    t=x;
    x=x/10;
    while(x>0)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    if(fd==s)
    cout<<t<<" is dracula";
    else
    cout<<t<<" is not dracula";
}
/*enter a number345
345 is not dracula
PS C:\Users\DELL\OneDrive\Desktop\c++> */