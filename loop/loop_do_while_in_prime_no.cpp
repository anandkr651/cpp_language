#include<iostream>
using namespace std;
int main()
{
    int x,i=2;
    cout<<"enter a number";
    cin>>x;
    do{
        if(x%i==0)
        {
            cout<<"not a prime number";
            break;
        }
        i++;
    }while(x>i);
    if(x==i)
     cout<<"prime number "<<x;
}
/*enter a number11
prime number 11
PS C:\Users\DELL\OneDrive\Desktop\c++> */