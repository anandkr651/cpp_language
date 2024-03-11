// #include<iostream>
// #include<string.h>
// using namespace std;
// class hero{
//     public:
//     int health;
//     char level;
//     char *name;
//     hero()
//     {
//         cout<<"simple constructor called "<<endl;
//         name = new char[20];
//     }
//     void sethealth(int h)
//     {
//         health=h;
//     }
//     void setlevel(char l)
//     {
//         level=l;
//     }
//     // hero(hero &temp)
//     // {
//     //     cout<<"copy constructor get called "<<endl;
//     //     this->health=temp.health;
//     //     this->level=temp.level; 
//     // }
//     void setname(char na[])
//     {
//        strcpy(this->name,na);
//     }
//      void getdata()
//      {
//         cout<<"health :"<<this->health<<", ";
//         cout<<"level :"<<this->level<<", ";
//         cout<<"name : "<<this->name<<" "<<endl;
//      }
// };
// int main()
// {
//     hero r;
//     r.sethealth(100);
//     r.setlevel('a');
//     char nap[10]="anandbha";
//     r.setname(nap);
//     r.getdata();
//     cout<<"my"<<endl;

//     hero w(r);  // or hero p=r;   //default copy constructor get called;
//     w.getdata();
//     cout<<"friend"<<endl;  

//     r.name[0]='p';
//     r.getdata();
//     cout<<"hello"<<endl;

//     w.getdata();
//     cout<<"pqres"<<endl;
 
//      w.name[0]='j';
//  r=w;
//  r.getdata();
// cout<<"yvcx"<<endl;
//  w.getdata();
//     cout<<"mjkjy"<<endl;
// }
//default copy constructor get called   ko ham shallow copy constructor kahete hai;
/*simple constructor called 
health :100, level :a, name : anandbha 
my
health :100, level :a, name : anandbha 
friend
health :100, level :a, name : pnandbha 
hello
health :100, level :a, name : pnandbha 
pqres
health :100, level :a, name : jnandbha
yvcx
health :100, level :a, name : jnandbha
mjkjy
PS C:\Users\DELL\OneDrive\Desktop\c++\constructor> */


#include<iostream>
#include<string.h>
using namespace std;
class hero{
    public:
    int health;
    char level;
    char *name;
    hero()
    {
        cout<<"simple constructor called "<<endl;
        name = new char[20];
    }
    void sethealth(int h)
    {
        health=h;
    }
    void setlevel(char l)
    {
        level=l;
    }
    hero(hero &temp)
    {
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"copy constructor get called "<<endl;
        this->health=temp.health;
        this->level=temp.level; 
    }
    void setname(char na[])
    {
       strcpy(this->name,na);
    }
     void getdata()
     {
        cout<<"health :"<<this->health<<", ";
        cout<<"level :"<<this->level<<", ";
        cout<<"name : "<<this->name<<" "<<endl;
     }
};
int main()
{
    hero r;
    r.sethealth(100);
    r.setlevel('a');
    char nap[10]="anandbha";
    r.setname(nap);
    r.getdata();

    hero w(r);  // or hero p=r;
    w.getdata();

    r.name[0]='p';
    r.getdata();

    w.getdata();
}

//when we create the own copy constructor the deep copy constructor get called;
/*simple constructor called 
health :100, level :a, name : anandbha 
copy constructor get called 
health :100, level :a, name : anandbha 
health :100, level :a, name : pnandbha 
health :100, level :a, name : anandbha 
PS C:\Users\DELL\OneDrive\Desktop\c++\constructor>*/