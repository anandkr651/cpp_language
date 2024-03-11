#include<iostream>
using namespace std;
int main()
{
    int x,i=1,a;
    cout<<"enter a number";
    cin>>x;
    do{
        a=x*i;
        cout<<x<<"*"<<i<<"="<<a<<endl;
        i++;
    }while(i<=10);
}
/*enter a number2
2*1=2 
2*2=4 
2*3=6 
2*4=8 
2*5=10
2*6=12
2*7=14
2*8=16
2*9=18
2*10=20
PS C:\Users\DELL\OneDrive\Desktop\c++>*/