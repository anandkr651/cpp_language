#include<iostream>
using namespace std;
int main()
{
    int bs,da,hra,ma,gs,net;
    cout<<"enter the basic salary\n";
    cin>>bs;
    if(bs>=40000)
    {
       da=bs*30/100;
    }
    else{
        da=bs*25/100;
    }
    if(bs>20000)
    {
        hra=bs*12/100;
    }
    else{
        hra=bs*10/100;
    }
    ma=2500;
    cout<<"dearness allowance is "<<da<<"\nhouse rent allowance is "<<hra<<"\nmadical allowance is "<<ma<<endl;
    gs=bs+da+hra+ma;
    cout<<"gross salary is "<<gs<<endl;
    if(gs>=50000)
    {
        net=gs-gs*10/100;
    }
    else{
        net=gs-gs*0/100;
    }
    cout<<"net salary is "<<net;
}


/*enter the basic salary
50000
dearness allowance is 15000
house rent allowance is 6000
madical allowance is 2500
gross salary is 73500
net salary is 66150
PS C:\Users\DELL\OneDrive\Desktop\c++> */