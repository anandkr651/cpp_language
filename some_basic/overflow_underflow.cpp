#include<iostream>
using namespace std;
int main()
{
    int x = INT_MAX;      //2147483647
    int y= INT_MIN;      //-2147483648
    x=x+1;
    y=y-1;

    cout<<"value of x "<<x<<endl;
    cout<<"value of y "<<y<<endl;
}
/*value of x -2147483648
value of y 2147483647
PS C:\Users\DELL\OneDrive\Desktop\c++> */