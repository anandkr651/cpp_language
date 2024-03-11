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
        s=s+d;
        x=x/10;
    }
    cout<<s;
}
/*enter a number123
6
PS C:\Users\DELL\OneDrive\Desktop\c++>*/