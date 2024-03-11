#include<iostream>
using namespace std;
int main()
{
    int x,s=0;
    char choice;
    do{
        cout<<"enter a number";
        cin>>x;
        s=s+x;
        cout<<"would you like to continue [y/n]";
        cin>>choice;
    }while(choice=='y'||choice=='Y');
    cout<<"sum is "<<s;
}
/*enter a number6
would you like to continue [y/n]y
enter a number9
would you like to continue [y/n]y
enter a number-8
would you like to continue [y/n]n
sum is 7
PS C:\Users\DELL\OneDrive\Desktop\c++>*/