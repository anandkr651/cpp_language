#include<iostream>
using namespace std;
int main()
{
    int i=1,n,m=0;
    cout<<"enter a number";
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            m++;
        }
        i++;
    }
    cout<<"no of factor "<<m;
}
/*enter a number8
1
2
4
8
no of factor 4
PS C:\Users\DELL\OneDrive\Desktop\c++>*/