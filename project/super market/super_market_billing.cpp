#include<iostream>
#include<fstream>
#include<sstream>
#include<windows.h>
using namespace std;
class bill{
    private:
    string items;
    int rates,quantity;
    public:
    bill():items(""),rates(0),quantity(0){}

    void setitem(string item)
    {
        items=item;
    }
    void setrate(int rate)
    {
        rates=rate;
    }
    void setquant(int quant)
    {
        quantity=quant;
    }
    string getitem()
    {
        return items;
    }
    int getrate()
    {
        return rates;
    }
    int getquant()
    {
        return quantity;
    }
};

void additem(bill b)
{
    bool close=false;
    while(!close)
    {
        int choice;
        cout<<"\t1.Add."<<endl;
        cout<<"\t2.close."<<endl;
        cout<<"\tEnter choice: ";
        cin>>choice;

        if(choice==1)
        {
            system("cls");
            string item;
            int rate,quant;
            cout<<"\tEnter Item Name: ";
            cin>>item;
            b.setitem(item);

            cout<<"\tEnter Rate Of Item: ";
            cin>>rate;
            b.setrate(rate);

            cout<<"\tEnter Quantity Of Item: ";
            cin>>quant;
            b.setquant(quant);

            ofstream out("bill.txt",ios::app);
            if(!out)
            {
                cout<<"\tError: File Cannot Open!"<<endl;
            }
            else{
                out<<"\t"<<b.getitem()<<" : "<<b.getrate()<<" : "<<b.getquant()<<endl<<endl;
            }
            out.close();
            cout<<"\tItem Added Successfuly"<<endl;
            Sleep(3000);
        }
        else if(choice==2)
        {
            system("cls");
            close=true;
            cout<<"\tBack To Main Menu!"<<endl;
            Sleep(3000);
        }
    }
}
void printbill()
{
    system("cls");
    int count=0;
    bool close=false;
    while(!close)
    {
        system("cls");
        int choice;
        cout<<"\t1.Add Bill."<<endl;
        cout<<"\t2.Close Session."<<endl;
        cout<<"\tEnter Choice: ";
        cin>>choice;
        if(choice==1)
        {
            string item;
            int quant;
            cout<<"\tEnter Item: ";
            cin>>item;
            cout<<"\tEnter Quantity: ";
            cin>>quant;

            ifstream in("bill.txt");
            ofstream out("bill_temp.txt");

            string line;
            bool found = false;

            while(getline(in,line))
            {
                stringstream ss;
                ss<<line;
                string itemname;
                int itemrate,itemquant;

                char delimiter;
                ss>>itemname>>delimiter>>itemrate>>delimiter>>itemquant;

                if(item==itemname)
                {
                    found =true;
                    if(quant<=itemquant)
                    {
                        int amount=itemrate*quant;
                        cout<<"\tItem | Rate | Quantity | Amount"<<endl;
                        cout<<"\t"<<itemname<<"\t"<<itemrate<<"\t"<<quant<<"\t"<<amount<<endl;
                        int newquant=itemquant-quant;
                        itemquant=newquant;
                        count+=amount;

                        out<<"\t"<<itemname<<" : "<<itemrate<<" : "<<itemquant<<endl<<endl;
                    }
                    else{
                        cout<<"\tSorry, "<<item<<" Ended!"<<endl;
                    }
                }
                else{
                    out<<line<<endl;
                }
            }
            if(!found)
            {
                cout<<"\tItem Not Available!"<<endl;
            }
            out.close();
            in.close();
            remove("bill.txt");
            rename("bill_temp.txt","bill.txt");
        }
        else if(choice==2)
        {
            close=true;
            cout<<"\tCounting Total Bill"<<endl;
        }
        Sleep(3000);
    }
    system("cls");
    cout<<endl<<endl;
    cout<<"\t Total Bill--------------------------: "<<count<<endl;
    cout<<"\tThanks For shopping!"<<endl;
    Sleep(5000);
}
int main()
{
    bill b;

    bool exit=false;
    while(!exit)
    {
        system("cls");
        int val;

        cout<<"\tWelcome To Super Market Billing system"<<endl;
        cout<<"\t**************************************"<<endl;
        cout<<"\t\t1.Add Item."<<endl;
        cout<<"\t\t2.Print Bill."<<endl;
        cout<<"\t\t3.Exit."<<endl;
        cout<<"\t\tEnter choice: ";
        cin>>val;

        if(val==1)
        {
            system("cls");
            additem(b);
            Sleep(3000);
        }
        else if(val==2)
        {
            printbill();
        }
        else if(val==3)
        {
            system("cls");
            exit=true;
            cout<<"\tGood luck!"<<endl;
            Sleep(3000);
        }
    }
}