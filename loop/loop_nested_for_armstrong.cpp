#include<iostream>
using namespace std;
int main()
{
    int i,num,s,d;
    for(i=1;i<=1000;i++)
    {
        num=i;
        s=0;
        while(num>0)
        {
            d=num%10;
            s=s+d*d*d;
            num=num/10;
        }
        if(s==i)
        cout<<s<<" is armstrong"<<endl;
    }
}
/*1 is armstrong
153 is armstrong
370 is armstrong
371 is armstrong
407 is armstrong
PS C:\Users\DELL\OneDrive\Desktop\c++> */