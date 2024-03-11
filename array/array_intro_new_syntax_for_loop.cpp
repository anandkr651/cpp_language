#include<iostream>
using namespace std;
int main()
{
    int x[5],i;
    cout<<"enter five element";
    for(i=0;i<5;i++)
    cin>>x[i];
    cout<<"elements are :-"<<endl;
    for(i=0;i<5;i++)
    cout<<x[i]<<endl;
    
    cout<<"new syntax for loop c++11"<<endl;
    for(int p:x)
    {
        cout<<p<<" ";
    }cout<<endl;
}
/*enter five element1
2
3
4
5
elements are :-
1
2
3
4
5
new syntax for loop c++11
1 2 3 4 5
PS C:\Users\DELL\OneDrive\Desktop\c++>*/