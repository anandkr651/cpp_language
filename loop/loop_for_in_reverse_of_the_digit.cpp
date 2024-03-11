#include<iostream>
using namespace std;
int main()
{
    int x,s=0,d;
    cout<<"enter a number";
    cin>>x;
    for(;x>0;)
    {
        d=x%10;
        s=s*10+d;
        x=x/10;
    }
    cout<<"reverse number is "<<s;
}
/*enter a number21
not a prime number
PS C:\Users\DELL\OneDrive\Desktop\c++>*/