#include <iostream>
using namespace std;

class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "the code of this item is " << id << endl;
        cout << "the price of the item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "enter id and price of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "item number " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}
/*enter id and price of the item 1
1
100
enter id and price of the item 2
2
200
enter id and price of the item 3
3
300
item number 1
the code of this item is 1
the price of the item is 100
item number 2
the code of this item is 2
the price of the item is 200
item number 3
the code of this item is 3
the price of the item is 300
PS C:\Users\DELL\OneDrive\Desktop\c++>*/