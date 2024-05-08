// ################################### static data member #######################

#include <iostream>
using namespace std;

class rectangle
{
private:
    int len, br;
    static int count;

public:
    void getdata()
    {
        cout << "enter the length and breadth" << endl;
        cin >> len >> br;
        count++;
    }
    void setdata(int l, int b)
    {
        len = l;
        br = b;
        count++;
    }
    void displaydata()
    {
        cout << "length " << len << endl;
        cout << "breadth " << br << endl;
        cout << "count is " << count << endl;
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
int rectangle ::count = 10;

int main()
{
    rectangle r1, r2, r3;

    r1.setdata(10, 20);
    r1.displaydata();
    r1.areaperi();

    r2.setdata(5, 8);
    r2.displaydata();
    r2.areaperi();

    r3.getdata();
    r3.displaydata();
    r3.areaperi();
    return 0;
}

/*length 10   
breadth 20  
count is 11 
area 200    
perimeter 60
length 5    
breadth 8   
count is 12 
area 40     
perimeter 26
enter the length and breadth
2
6
length 2
breadth 6
count is 13
area 12
perimeter 16
PS C:\Users\DELL\OneDrive\Desktop\cpp\class>*/

// ########################## static function ##############################
#include <iostream>
using namespace std;

class rectangle
{
private:
    int len, br;
    static int count;

public:
    void getdata()
    {
        cout << "enter the length and breadth" << endl;
        cin >> len >> br;
        count++;
    }
    void setdata(int l, int b)
    {
        len = l;
        br = b;
        count++;
    }
    void displaydata()
    {
        cout << "length " << len << endl;
        cout << "breadth " << br << endl;
        cout << "count is " << count << endl;
    }
    void areaperi()
    {
        int a, p;
        a = len * br;
        p = 2 * (len + br);
        cout << "area " << a << endl;
        cout << "perimeter " << p << endl;
    }
    static void getcount()
    {
        cout << "the value of count is " << count << endl;
    }
};
int rectangle ::count = 10;

int main()
{
    rectangle r1, r2, r3;

    r1.setdata(10, 20);
    r1.displaydata();
    r1.areaperi();
    rectangle::getcount();

    r2.setdata(5, 8);
    r2.displaydata();
    r2.areaperi();
    rectangle::getcount();

    r3.getdata();
    r3.displaydata();
    r3.areaperi();
    rectangle::getcount();
    return 0;
}
/*length 10
breadth 20
count is 11
area 200
perimeter 60
the value of count is 11
length 5
breadth 8
count is 12
area 40
perimeter 26
the value of count is 12
enter the length and breadth
3
4
length 3
breadth 4
count is 13
area 12
perimeter 14
the value of count is 13
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/