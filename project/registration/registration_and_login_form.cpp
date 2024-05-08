#include<iostream>   //for input or output
#include<fstream>    //for file handling
#include<windows.h>  //sleep is this header file
#include<sstream>
using namespace std;
class login{
    private:
    string loginid,password;
    public:
    login():loginid(""),password(" "){}   //not understand
    void setid(string id)
    {
        loginid=id;
    }
    void setpw(string pw)
    {
        password=pw;
    }
    string getid()
    {
        return loginid;
    }
    string getpw()
    {
        return password;
    }
};
void registration(login log)
{
    system("cls");
    string id,pw;
    cout<<"\tEnter Login Id:" ;
    cin>>id;
    log.setid(id);

    start:
    cout<<"\tEnter A Strong Password: ";
    cin>>pw;
    if(pw.length()>=8)
    {
        log.setpw(pw);
    }
    else{
        cout<<"\tEnter Minimum 8 Character!"<<endl;
        goto start;
    }
    ofstream outfile("login.txt",ios::app); //this can be used to write in the file. ios::app can be 
    //used because when we write current data then the previous data is already save and the current 
    //data can be disply after the previous data.
    if(!outfile)
    {
        cout<<"\tError: File Cannot Open!"<<endl;
    }
    else{
        outfile<<"\t"<<log.getid()<<" : "<<log.getpw()<<endl;
        cout<<"\tUser Registered Successfully!"<<endl;
    }
    outfile.close();
    Sleep(1000);
}
void logine()
{
    system("cls");
    string id,pw;
    cout<<"\tEnter Login Id: ";
    cin>>id;

    cout<<"\tEnter password: ";
    cin>>pw;
    ifstream infile("login.txt");
    if(!infile)
    {
        cout<<"\tError Cannot Open! "<<endl;
    }
    else{
        string line;
        bool found=false;
        while(getline(infile,line))
        {
            stringstream ss;         //not understand
            ss<<line;
            string userid,userpw;
            char delimiter;         //not understand
            ss>>userid>>delimiter>>userpw;    //not understand
            
            if(id==userid && pw==userpw)
            {
                found=true;
                cout<<"\tPlease Wait";
                for(int i=0;i<3;i++)
                {
                    cout<<".";
                    Sleep(800);
                }
                system("cls");
                cout<<"\tWelcome To This Page"<<endl;
            }
        }
        if(!found)
        {
            cout<<"\tError: Incorrect Login ID Or Password!"<<endl;
        }
    }
    infile.close();
    Sleep(5000);
}
int main()
{
    login log ;

    bool exit=false;
    while(!exit)
    {
        system("cls");   //we can used because of previous data can be hide.
        int val;
        cout<<"\tWelcome To Registration & Login Form"<<endl;
        cout<<"\t************************************"<<endl;
        cout<<"\t1.Register."<<endl;
        cout<<"\t2.Login."<<endl;
        cout<<"\t3.Exit."<<endl;
        cout<<"\tEnter your choice: ";
        cin>>val;
        if(val==1)
        {
            registration(log);
        }
        else if(val==2)
        {
            logine();
        }
        else if(val==3)
        {
            system("cls");
            exit=true;
            cout<<"\tGood Luck"<<endl;
            Sleep(3000);
        }
        Sleep(3000);     //how much time the current iteration can be display on the screen.
    }
    return 0;
}