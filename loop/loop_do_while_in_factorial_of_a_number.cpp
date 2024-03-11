#include<iostream>
using namespace std;
int main()
{
    int x,p=1;
    cout<<"enter a number";
    cin>>x;
    do{
        p=p*x;
        cout<<x<<endl;
        x--;
    }while(x>=1);
    cout<<"factorial "<<p;
}
/*enter a number5
5
4
3
2
1
factorial 120
PS C:\Users\DELL\OneDrive\Desktop\c++>*/