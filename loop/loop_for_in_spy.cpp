#include<iostream>
using namespace std;
int main()
{
    int x,s=0,d,t,p=1;
    cout<<"enter a number";
    cin>>x;
    t=x;
    for(;x>0;)
    {
        d=x%10;
        s=s+d;
        p=p*d;
        x=x/10;
    }
    if(s==p)
    cout<<"spy is "<<t;
    else
    cout<<"not spy";
}
/*enter a number1421
spy is 1421
PS C:\Users\DELL\OneDrive\Desktop\c++>*/