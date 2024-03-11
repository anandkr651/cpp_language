#include <iostream>
using namespace std;
int main()
{
    cout << "hello world" << endl;
    cout << "my name is anand";
    return 0;
}
/*hello world
my name is anand
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include <iostream>
using namespace std;
main()
{
    int n[10];
    int i;
    cout << "Enter 10 nos: ";
    for (i = 0; i < 10; i++)
        cin >> *(n + i);
    for (i = 0; i < 10; i++)
        cout << *(n + i) << "\t";
}
/*Enter 10 nos: 1
2
3
4
5
6
7
8
9
10
1       2       3       4       5       6       7       8       9       10
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    string text = "we are so called \"viking\" from north";
    cout << text;
    return 0;
}
/*we are so called "viking" from north
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include <iostream>
using namespace std;
int main()
{
    string text = "we are's called from north";
    cout << text;
    return 0;
}
/*we are's called from north
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    string firstname;
    cout << "enter the first name : ";
    cin >> firstname;
    cout << "your first name is " << firstname;
    return 0;
}
/*enter the first name : anand
your first name is anand
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    string fullname;
    cout << "enter the full name : ";
    cin >> fullname;
    cout << "your full name is " << fullname;
    return 0;
}
/*enter the full name : anand bhagat
your full name is anand
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    string fullname;
    cout << "enter the full name : ";
    getline(cin, fullname);
    cout << "your full name is " << fullname;
    return 0;
}
/*enter the full name : anand bhagat
your full name is anand bhagat
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    int afe{23};
    int age(26);
    int hgt = 90;
    cout << "afe " << afe << endl;
    cout << "age " << age << endl;
    cout << "hgt " << hgt << endl;
    return 0;
}
/*afe 23
age 26
hgt 90
PS C:\Users\DELL\OneDrive\Desktop\c++> */