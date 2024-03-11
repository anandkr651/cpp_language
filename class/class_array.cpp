#include <iostream>
using namespace std;

class shop
{
    int itemid[10];
    int itemprice[10];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "enter id of your item number " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
}
/*enter id of your item number 1
100
enter price of your item
10
enter id of your item number 2
761
enter price of your item
76
enter id of your item number 3
986
enter price of your item
98
the price of item with id 100 is 10
the price of item with id 761 is 76
the price of item with id 986 is 98
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;

class rectangle
{
private:
    int len, br;

public:
    void getdata()
    {
        cout << "enter the length and breadth" << endl;
        cin >> len >> br;
    }
    void setdata(int l, int b)
    {
        len = l;
        br = b;
    }
    void displaydata(void)
    {
        cout << "length " << len << endl;
        cout << "breadth " << br << endl;
    }
    void areaperi()
    {
        int a, p;
        a = len * br;
        p = 2 * (len + br);
        cout << "area " << a << endl;
        cout << "perimeter " << p << endl;
    }
};
int main()
{
    // rectangle r1,r2,r3;
    rectangle fb[3];
    for (int i = 0; i < 3; i++)
    {
        fb[i].getdata();
        fb[i].displaydata();
        fb[i].areaperi();
    }
    return 0;
}
/*enter the length and breadth
2
6
length 2
breadth 6
area 12
perimeter 16
enter the length and breadth
3
7
length 3
breadth 7
area 21
perimeter 20
enter the length and breadth
4
8
length 4
breadth 8
area 32
perimeter 24
PS C:\Users\DELL\OneDrive\Desktop\c++>*/