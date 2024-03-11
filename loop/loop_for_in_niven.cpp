#include<iostream>
using namespace std;
int main()
{
    int x,s=0,d,t;
    cout<<"enter a number";
    cin>>x;
    t=x;
    for(;x>0;)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    if(t%s==0)
    cout<<"niven is "<<t;
    else
    cout<<"not niven";
}
/*enter a number21
niven is 21
PS C:\Users\DELL\OneDrive\Desktop\c++>*/