/*#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the month name";
    cin>>m;
    if(m==1)
     cout<<"january";
    else if(m==2)
     cout<<"february";
     else if(m==3)
     cout<<"march";
     else if(m==4)
     cout<<"april";
     else if(m==5)
     cout<<"may";
     else if(m==6)
     cout<<"june";
     else if(m==7)
     cout<<"july";
     else if(m==8)
     cout<<"august";
     else if(m==9)
     cout<<"september";
     else if(m==10)
     cout<<"october";
     else if(m==11)
     cout<<"november";
     else if(m==12)
     cout<<"december";
     else 
     cout<<"invalid month number";

}*/
/*enter the month name6
june
PS C:\Users\DELL\OneDrive\Desktop\c++> */

/*
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the month number";
    cin>>m;
    if(m==1)
     cout<<"31 days";
    else if(m==2)
     cout<<"28 or 29 days";
    else if(m==3)
     cout<<"31 days";
    else if(m==4)
     cout<<"30 days";
     else if(m==5)
     cout<<"31 days";
    else if(m==6)
     cout<<"30 days";
     else if(m==7)
     cout<<"31 days";
     else if(m==8)
     cout<<"31 days";
    else if(m==9)
     cout<<"30 days";
     else if(m==10)
     cout<<"31 days";
    else if(m==11)
     cout<<"30 days";
    else if(m==12)
     cout<<"31 days";
    else
     cout<<"invalid month number";
}*/
/*enter the month number9
30 days
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the month number";
    cin>>m;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
     cout<<"31 days";
    else if(m==4||m==6||m==9||m==11)
     cout<<"30 days";
    else if(m==2)
      cout<<"28 or 29 days";
    else
      cout<<"invalid month number";
}
/*enter the month number12
31 days
PS C:\Users\DELL\OneDrive\Desktop\c++> */