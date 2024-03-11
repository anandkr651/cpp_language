#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;

class university{
    private:
    string Rollno,Name,Subject,Address;
    public:
    university():Rollno(""),Name(""),Subject(""),Address(""){}
    void setrollno(string rollno)
    {
       Rollno=rollno;
    }
    void setname(string name)
    {
       Name=name;
    }
    void setsubject(string subject)
    {
       Subject=subject;
    }
    void setaddress(string address)
    {
       Address=address;
    }
    string getrollno()
    {
        return Rollno;
    }
    string getname()
    {
        return Name;
    }
    string getsubject()
    {
        return Subject;
    }
    string getaddress()
    {
        return Address;
    }
};
void add(university student)
{
    string rollno,name,subject,address;

    cout<<"\tEnter Rollno Of Student: ";
    cin>>rollno;
    student.setrollno(rollno);

    cout<<"\tEnter Name Of Student: ";
    cin>>name;
    student.setname(name);
    
    cout<<"\tEnter Subject Of Student: ";
    cin>>subject;
    student.setsubject(subject);
    
    cout<<"\tEnter Address Of Student: ";
    cin>>address;
    student.setaddress(address);

    ofstream out("university.txt",ios::app);
    if(!out)
    {
        cout<<"\tError : File Cannot Open!"<<endl;
    }
    else{
        out<<"\t"<<student.getrollno()<<" : "<<student.getname()<<" : "<<student.getsubject()<<" : "<<student.getaddress()<<endl<<endl;
        out.close();
        cout<<"\tStudent Added Successfuly!"<<endl;
    }
}
void search()
{
    string rollno;
    cout<<"\tEnter Rollno Of Student: ";
    cin>>rollno;

    ifstream in("university.txt");
    if(!in)
    {
        cout<<"\tError : File Cannot Open!"<<endl;
    }
    string line;
    bool found=false;
    while(getline(in,line))
    {
        int data=line.find(rollno);
        if(data !=string :: npos)
        {
        cout<<line<<endl;
        found = true;
        }
        if(!found)
        {
            cout<<"no student of this rollno"<<endl;
        }
    }
    in.close();
}
void update(university student)
{
    string rollno;
    cout<<"\tEnter Rollno Of Student: ";
    cin>>rollno;
    
    ifstream infile("university.txt");
    ofstream outfile("university_temp.txt");

    if(!infile || !outfile)
    {
       cout<<"\tError : File Cannot Open!"<<endl;
    }
    string line;
    bool found=false;
    while(getline(infile,line))
    {
        int pos=line.find(rollno);
        if(pos !=string::npos)
        {
            string address;
            cout<<"\tEnter New Address: ";
            cin>>address;
            student.setaddress(address);

            int newpos=line.find_last_of(':');
            line.replace(newpos+2,string::npos,student.getaddress());
        }
        outfile<<line<<endl;
        found=true;
    }
    if(!found)
    {
        cout<<"\tStudent Not Found!"<<endl;
        return;
    }
    outfile.close();
    infile.close();
    remove("university.txt");
    rename("university_temp.txt","university.txt");
    cout<<"\tData Updated!"<<endl;
}
int main()
{
    university student;
    bool exit=false;
    while(!exit)
    {
        system("cls");
        int val;
        cout<<"\tWelcome To University Management System"<<endl;
        cout<<"\t***************************************"<<endl;
        cout<<"\t1.Add Student."<<endl;
        cout<<"\t2.Search Student."<<endl;
        cout<<"\t3.Update Date Of Student."<<endl;
        cout<<"\t4.Exit."<<endl;
        cout<<"\tEnter Your Choice: ";
        cin>>val;

        if(val==1)
        {
            system("cls");
            add(student);
            Sleep(3000);
        }
        else if(val==2)
        {
            system("cls");
            search();
            Sleep(6000);
        }
        else if(val==3)
        {
            system("cls");
            update(student);
            Sleep(3000);
        }
        else if(val==4)
        {
           system("cls");
           exit=true;
           cout<<"\tGood Luck"<<endl;
           Sleep(3000);
        }
    }
}