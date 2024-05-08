#include <iostream>
using namespace std;

int main()
{
    int age1 = 32;
    int age2(32);
    int age3{32};
    cout << age1 << endl
         << age2 << endl
         << age3 << endl;
}
/*32
32
32*/

#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int &j = i;
    cout << "i =" << i << "j =" << j << endl;
    j = 20;
    cout << "i =" << i << "j =" << j << endl;
    i = 30;
    cout << "i =" << i << "j =" << j << endl;
    i++;
    cout << "i =" << i << "j =" << j << endl;
    j++;
    cout << "i =" << i << "j =" << j << endl;
    cout << "address of i = " << &i << "address of j =" << &j << endl;
    return 0;
}
/*i =10j =10
i =20j =20
i =30j =30
i =31j =31
i =32j =32
address of i = 0x32fe3ff7a4address of j =0x32fe3ff7a4*/

/*#include<iostream>
using namespace std;
int main()
{
const int i = 10;
int &j = i;
cout << "i =" << i << "j =" << j;
j = 20;
cout << "i =" << i << "j =" << j;
return 0;
}*/
// error

/*#include<iostream>
using namespace std;
int main()
{
int i = 10;
const int &j = i;
cout << i << j;
j = 20;
cout << i << j;
return 0;
}*/
// error

#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    const int &j = i;
    cout << i << j << endl;
    i = 20;
    cout << i << j;
    return 0;
}
/*1010
2020
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
int main()
{
    bool x, y;
    int a = 10, b = 20, c = 30;
    x = a < b;
    y = b >= c;
    cout << x << endl
         << y;
}
/*1
0
PS C:\Users\DELL\OneDrive\Desktop\c++\book> */