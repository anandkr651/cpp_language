#include<iostream>
using namespace std;
int main()
{
    int i,num,d,s;
    for(i=125;i<=135;i++)
    {
        num=i;
        s=0;
        while(num>0)
        {
            d=num%10;
            s=s*10+d;
            num=num/10;
        }
        cout<<i<<" reverse number is "<<s<<endl;
    }
}
/*125 reverse number is 521
126 reverse number is 621
127 reverse number is 721
128 reverse number is 821
129 reverse number is 921
130 reverse number is 31 
131 reverse number is 131
132 reverse number is 231
133 reverse number is 331
134 reverse number is 431
135 reverse number is 531
PS C:\Users\DELL\OneDrive\Desktop\c++> */