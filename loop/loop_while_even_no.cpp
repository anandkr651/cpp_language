#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<=10)
    {
        if(i%2==0)
            cout<<i<<endl;
            i++;
    }
    cout<<"all the odd no";
    int p=0;
    while(p<=10)
    {
        if(p&1)
            cout<<p<<endl;
            p++;
    }
}
/*0
2
4
6
8
10
all the odd no1
3
5
7
9
PS C:\Users\DELL\OneDrive\Desktop\c++>*/