#include<iostream>
using namespace std;
int main()
{
    int x[2][3],i,j,s=0;
    cout<<"enter the number";

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        cin>>x[i][j];
    }
    cout<<"number are"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        cout<<x[i][j]<<"\t";
        cout<<endl;
    }
    cout<<"odd number are"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        if(x[i][j]%2==1)
        {
            cout<<x[i][j]<<"\t";
            s=s+x[i][j];
        }
        cout<<endl;
    }
    cout<<s<<"sum is";
}
/*enter the number1
2
3
4
5
6
number are
1       2       3
4       5       6
odd number are
1       3
5
9sum is
PS C:\Users\DELL\OneDrive\Desktop\c++>*/