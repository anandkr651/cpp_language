#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"enter the length and breadth";
    cin>>l>>b;
    if(l==b)
    cout<<"area is "<<l*b;
    else
    cout<<"perimeter is "<<2*(l+b);
}
/*enter the length and breadth3
4
perimeter is 14*/