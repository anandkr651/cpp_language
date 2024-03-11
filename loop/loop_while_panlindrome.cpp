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
        s=s*10+d;
        x=x/10;
    }
    if(s==t)
    cout<<t<<" is panlindrome number";
    else
    cout<<t<<" is not a panlindrome number";
}
/*enter a number356
356 is not a panlindrome number        
PS C:\Users\DELL\OneDrive\Desktop\c++>*/