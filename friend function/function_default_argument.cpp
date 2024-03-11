#include <iostream>
using namespace std;

float moneyreceived(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}
int main()
{
    int money = 100000;
    cout << "if you have " << money << " rs in your bank account,you will receive " << moneyreceived(money) << " rs after 1 year" << endl;
    cout << "for vip : if you have " << money << " rs in your bank account,you will receive " << moneyreceived(money, 1.10) << " rs after 1 year";
}

/*if you have 100000 rs in your bank account,you will receive 104000 rs after 1 year
for vip : if you have 100000 rs in your bank account,you will receive 110000 rs after 1 year
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include <iostream>
using namespace std;
int sum(int a, int b, int c = 10);

int main()
{
    int x, y, z;
    cout << "enter the number";
    cin >> x >> y >> z;
    cout << "sum" << sum(x, y);
    cout << "sum" << sum(x, y, z);
}
int sum(int a, int b, int c)
{
    return (a + b + c);
}
/*enter the number2
3
4
sum15sum9
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
void myfunction(string country = "norway")
{
    cout << country << endl;
}
int main()
{
    myfunction("india");
    myfunction("sweden");
    myfunction();
    myfunction("usa");
}

/*india
sweden
norway
usa
PS C:\Users\DELL\OneDrive\Desktop\c++> */