#include<iostream>
using namespace std;
int main()
{
    int pos,neg,zero,n;
    char ans;
    pos=0,neg=0,zero=0;
    do
    {
        cout<<"enter a number";
        cin>>n;
        if(n==0)
          zero++;
        if(n>0)
          pos++;
        if(n<0)
          neg++;
          // fflush(stdin);
        cout<<"do you want to continue";
        cin>>ans;
    } while(ans=='y'|| ans=='Y');
    cout<<"you have enter "<<pos<< "positive number"<<endl;
    cout<<"you have enter "<<neg<< "negative number"<<endl;
    cout<<"you have enter "<<zero<< "zero number";
}
/*enter a number3
do you want to continueo
you have enter 1positive number
you have enter 0negative number
you have enter 0zero number
PS C:\Users\DELL\OneDrive\Desktop\c++> */