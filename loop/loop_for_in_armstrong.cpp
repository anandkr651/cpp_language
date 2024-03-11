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
        s=s+d*d*d;
        x=x/10;
    }
    if(s==t)
    cout<<"armstrong is "<<s;
    else
    cout<<"not armstrong";
}
/*enter a number1234
not armstrong
PS C:\Users\DELL\OneDrive\Desktop\c++>*/