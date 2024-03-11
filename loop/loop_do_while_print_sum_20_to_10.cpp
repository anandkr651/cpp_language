#include<iostream>
using namespace std;
int main()
{
    int x=20,s=0;
    do{
        cout<<x<<endl;
        s=s+x;
        x--;
    }while(x>=10);
    cout<<"sum is "<<s;
}
/*20
19
18
17
16
15
14
13
12
11
10
sum is 165
PS C:\Users\DELL\OneDrive\Desktop\c++> */