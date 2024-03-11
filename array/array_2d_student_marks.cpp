#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j,s;
    cout<<"enter the student roll_no,marks"<<endl;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    cin>>a[i][j];
    cout<<"roll no \t"<<"paper 1 \t"<<"paper 2 \t"<<"paper 3 \t"<<"paper 4 \t"<<"paper 5 \t"<<"total \n";
     for(i=0;i<5;i++)
     {
        cout<<i+1<<"\t \t";
      s=0;
    for(j=0;j<5;j++)
    {
    cout<<a[i][j]<<"\t\t";
        s=s+a[i][j];
    }
    cout<<s<<"\n";
    }
}

/*enter the student roll_no,marks
1
2
3
4
5
1
2
3
4
5
1
2
3
4
5
1
2
3
4
5
1
23
3
5
roll no         paper 1         paper 2         paper 3         paper 4         paper 5         total
1               1               2               3               4               5               15
2               1               2               3               4               5               15
3               1               2               3               4               5               15
4               1               2               3               4               5               15
5               1               23              3               4               5               36
PS C:\Users\DELL\OneDrive\Desktop\c++>*/