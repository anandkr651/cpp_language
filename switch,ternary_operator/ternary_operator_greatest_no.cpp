#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three number"<<endl;
    cin>>a>>b>>c;
    (a>b&&a>c)?cout<<a<<" is the greatest number among them":((b>c)?cout<<b<<" is the greatest number among them":cout<<c<<" is the greatest number among them")<<endl;
}
/*enter the three number
3
4
8
8 is the greatest number among them    
PS C:\Users\DELL\OneDrive\Desktop\c++>*/