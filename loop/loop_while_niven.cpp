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
        s=s+d;
        x=x/10;
    }
    if(t%s==0)
    cout<<t<<" is niven";
    else
    cout<<t<<" is not a niven";
}
/*enter a number897
897 is not a niven
PS C:\Users\DELL\OneDrive\Desktop\c++>*/