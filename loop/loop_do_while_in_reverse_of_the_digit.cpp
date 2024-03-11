#include<iostream>
using namespace std;
int main()
{
    int x,d,s=0;
    cout<<"enter a number";
    cin>>x;
    do{
        d=x%10;
        s=s*10+d;
        x=x/10;
    }while(x>0);
    cout<<"reverse of digit "<<s;
}
/*enter a number234
reverse of digit 432
PS C:\Users\DELL\OneDrive\Desktop\c++>*/