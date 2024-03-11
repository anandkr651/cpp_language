#include<iostream>
using namespace std;
int main()
{
    int item_no,quan;
    float rate,amt,dis,netamt;
    cout<<"enter the item number";
    cin>>item_no;
    cout<<"enter rate and quantity";
    cin>>rate>>quan;
    amt=rate*quan;
    if(item_no==1)
    {
        if(amt>=25000)
        dis=amt*40/100;
        else
        dis=amt*30/100;
    }
    else
    {
        if(amt>=10000)
        dis=amt*25/100;
        else
        dis=amt*15/100;
    }
    netamt=amt-dis;
    cout<<"amount is "<<amt<<endl;
    cout<<"discount is "<<dis<<endl;
    cout<<"net amount is "<<netamt;
}
/*enter the item number1
enter rate and quantity1000
30
amount is 30000    
discount is 12000  
net amount is 18000
PS C:\Users\DELL\OneDrive\Desktop\c++>*/