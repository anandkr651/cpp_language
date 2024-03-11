#include<iostream>
using namespace std;
int main()
{
    int x,d,s=0;
    cout<<"enter a number";
    cin>>x;
    while(x>0)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    cout<<"sum of digit "<<s;
}
/*enter a number345
sum of digit 12
PS C:\Users\DELL\OneDrive\Desktop\c++>*/