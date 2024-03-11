#include<iostream>
using namespace std;
int main()
{
    int i,num,s,d;
    for(i=1;i<=100;i++)
    {
        num=i;
        s=0;
        while(num>0)
        {
            d=num%10;
            s=s*10+d;
            num=num/10;
        }
        if(s==i)
        cout<<s<<" is palindrome"<<endl;
    }
}
/*1 is palindrome
2 is palindrome
3 is palindrome
4 is palindrome
5 is palindrome
6 is palindrome
7 is palindrome
8 is palindrome
9 is palindrome
11 is palindrome
22 is palindrome
33 is palindrome
44 is palindrome
55 is palindrome
66 is palindrome
77 is palindrome
88 is palindrome
99 is palindrome
PS C:\Users\DELL\OneDrive\Desktop\c++>*/