#include<iostream>
using namespace std;
int main()
{
    int x,d,s=0,t;
    cout<<"enter a number";
    cin>>x;
    t=x;
    while(x>0)
    {
        d=x%10;
        s=s+d*d*d;
        x=x/10;
    }
    if(s==t)
    {
        cout<<t<<" armstrong";
    }
    else
    cout<<t<<" is not a armstrong";
}

/*enter a number153
153 armstrong
PS C:\Users\DELL\OneDrive\Desktop\c++>*/