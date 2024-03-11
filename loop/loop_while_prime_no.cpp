#include<iostream>
using namespace std;
int main()
{
    int i=2,x;
    cout<<"enter a number";
    cin>>x;
    while(i<=x-1)
    {
        if(x%i==0)
        {
            cout<<"not a prime number";
            break;
        }
        i++;
    }
    if(i==x)
    cout<<"prime number";
}
/*enter a number67
prime number
PS C:\Users\DELL\OneDrive\Desktop\c++>*/