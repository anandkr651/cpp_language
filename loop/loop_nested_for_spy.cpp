#include<iostream>
using namespace std;
int main()
{
    int i,num,d,s,p;
    for(i=10;i<=1000;i++)
    {
        num=i;
        s=0;
        p=1;
        while(num>0)
        {
            d=num%10;
            s=s+d;
            p=p*d;
            num=num/10;
        }
        if(s==p)
        cout<<i<<" is spy number "<<endl;
    }
}
/*22 is spy number  
123 is spy number 
132 is spy number 
213 is spy number 
231 is spy number 
312 is spy number 
321 is spy number 
PS C:\Users\DELL\OneDrive\Desktop\c++> */