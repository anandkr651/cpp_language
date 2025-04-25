#include <iostream>
using namespace std;
int main()
{
     int i = 5;
     int &j = i;
     // int &j;      // error
     // j=i;
     int p = 10;
     j = p;
     cout << i << endl
          << j << endl;
     p = 20;
     cout << i << endl
          << j << endl;
     return 0;
}
/*10
10
10
10
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
int main()
{
     char *p = "hello";
     char *q = p;
     cout << p << endl
          << q << endl;
     q = "Good Bye";
     cout << p << endl
          << q << endl;
     return 0;
}
/*hello
hello
hello
Good Bye
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
int i = 20;
int main()
{
     int i = 5;
     cout << i << endl
          << ::i << endl;
     {
          int i = 10;
          cout << i << endl
               << ::i << endl; // it can access only global variable.
     }
     return 0;
}
/*5
20
10
20
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
const int i = 10;
int main()
{
    const int i = 20;
    cout << i << endl
         << ::i << endl;
    cout << &i << endl
         << &::i << endl;
    return 0;
}
/*20
10
0xde6adffb5c
0x7ff7be364000*/

// #include<iostream>
// using namespace std;
// int main()
// {
// for (int i = 1; i <= 10; i++)    //in this case i was declared but the scope of the i is line 75 and 76
// cout << i << endl;
// cout << i;     //i was not declered.
// return 0;
// }
/*error*/

#include <iostream>
using namespace std;
int main()
{
     int i = 5;
     int &j = i;
     int &k = j;
     int &l = i;
     cout << i << j << k << l;
     return 0;
}
/*5555*/

#include <iostream>
using namespace std;

int main()
{
     auto a = 56;
     cout << "auto " << a;
}
/*auto 56
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/