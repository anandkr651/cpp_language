#include<iostream>
using namespace std;
int main()
{
    int x=1,p=1;
    do{
         cout<<x<<endl;
         p=p*x;
         x++;
    }while(x<=10);
    cout<<"product "<<p;
}
/*1
2
3
4
5
6
7
8
9
10
product 3628800
PS C:\Users\DELL\OneDrive\Desktop\c++>*/