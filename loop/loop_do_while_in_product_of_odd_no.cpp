#include<iostream>
using namespace std;
int main()
{
    int x=10,p=1;
    do{
        if(x%2==1)
        {
             cout<<x<<endl;
            p=p*x;
        }
         x--;
    }while(x>=1);
    cout<<"product "<<p;
}
/*9
7
5
3
1
product 945
PS C:\Users\DELL\OneDrive\Desktop\c++> */