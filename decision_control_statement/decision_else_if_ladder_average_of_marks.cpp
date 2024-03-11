#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,per,total;
    cout<<"enter the five subject marks"<<endl;
    cin>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    per=total/5;
    cout<<"total marks of the five subject "<<total<<"\npercentage of the five subject "<<per<<endl;
    if(per>=80)
       cout<<"outstanding";
     else if(per>=70)
       cout<<"very good";
     else if(per>=60)
      cout<<"good";
      else if(per>=50)
      cout<<"average";
      else
      cout<<"fail";
}

/*enter the five subject marks
89
78
90
97
67
total marks of the five subject 421
percentage of the five subject 84  
outstanding
PS C:\Users\DELL\OneDrive\Desktop\c++> */