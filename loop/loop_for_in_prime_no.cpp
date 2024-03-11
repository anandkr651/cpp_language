#include<iostream>
using namespace std;
int main()
{
    int x,i;
    cout<<"enter a number";
    cin>>x;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            cout<<"not a prime number";
            break;
        }
    }
    if(x==i)
    cout<<"prime number";
}
/*enter a number21
not a prime number
PS C:\Users\DELL\OneDrive\Desktop\c++>*/