#include<iostream>
using namespace std;
int main()
{
    int x,m=0,i=1;
    cout<<"enter a number";
    cin>>x;
    do{
        if(x%i==0)
        {
            cout<<i<<endl;
            m++;
        }
        i++;
    }while(x>=i);
    cout<<"no of factor "<<m;
}
/*enter a number8
1
2
4
8
no of factor 4
PS C:\Users\DELL\OneDrive\Desktop\c++> */