#include<iostream>
using namespace std;
int main()
{
    int p=1,i;
    cout<<"enter a number";
    cin>>i;
    while(i>=1)
    {
        p=p*i;
        cout<<i<<endl;
        i--;  
    }
    cout<<"factorial of a number is "<<p;
}
/*enter a number4
4
3
2
1
factorial of a number is 24
PS C:\Users\DELL\OneDrive\Desktop\c++>*/