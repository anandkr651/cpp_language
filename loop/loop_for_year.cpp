#include<iostream>
using namespace std;
int main()
{
    int year,i,day=0;
    cout<<"enter a year";
    cin>>year;
    for(i=1;i<year;i++)
    {
        if(i%4==0)
        day=day+366;
        else
        day=day+365;
    }
    day=day%7;
    if(day==1)
    cout<<"there is monday in 1/1/"<<year;
    if(day==2)
    cout<<"there is tuesday in 1/1/"<<year;
    if(day==3)
    cout<<"there is wednesday in 1/1/"<<year;
    if(day==4)
    cout<<"there is thrusday in 1/1/"<<year;
    if(day==5)
    cout<<"there is friday in 1/1/"<<year;
    if(day==6)
    cout<<"there is saturday in 1/1/"<<year;
    if(day==0)
    cout<<"there is sunday in 1/1/"<<year;

}
/*enter a year2023
there is sunday in 1/1/2023
PS C:\Users\DELL\OneDrive\Desktop\c++>*/