#include<iostream>
using namespace std;
int main()
{
    int x[2][3],i,j,s,d,num;
    cout<<"enter the elements";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        cin>>x[i][j];
    }
    cout<<"matrix are"<<endl;
      for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        cout<<x[i][j]<<"\t";
        cout<<endl;
    }
    cout<<"sum of digit"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            s=0;
            num=x[i][j];
            while(num>0)
            {
                d=num%10;
                s=s+d;
                num=num/10;
            }
            cout<<x[i][j];
            cout<<"sum "<<s<<endl;
        }
    }
}
/*enter the elements12
23
34
45
56
67
matrix are
12      23      34
45      56      67
sum of digit
12sum 3
23sum 5
34sum 7
45sum 9
56sum 11
67sum 13
PS C:\Users\DELL\OneDrive\Desktop\c++>*/