/*function overloading  means multiple function can have the same name with different parameter*/

#include <iostream>
using namespace std;

int plusfuncint(int x, int y)
{
    return x + y;
}
double plusfuncdouble(double x, double y)
{
    return x + y;
}

int main()
{
    int mynum1 = plusfuncint(8, 5);
    double mynum2 = plusfuncdouble(4.3, 6.26);
    cout << "int " << mynum1 << endl;
    cout << "double " << mynum2 << endl;
}
/*int 13
double 10.56
PS C:\Users\DELL\OneDrive\Desktop\c++> */

/*instead of defining two function that should do the same thing. it is better to overload one
  in the example below, we overload the plusfun function to work for both int and double */
// #################### on the basic of data types passed in the argument #######################

#include <iostream>
using namespace std;

int plusfunc(int x, int y)
{
    return x + y;
}
double plusfunc(double x, double y)
{
    return x + y;
}

int main()
{
    int mynum1 = plusfunc(8, 5);
    double mynum2 = plusfunc(4.3, 6.26);
    cout << "int " << mynum1 << endl;
    cout << "double " << mynum2 << endl;
}
/*int 13
double 10.56
PS C:\Users\DELL\OneDrive\Desktop\c++> */

// ################################## on the basic of arguments ###################

#include <iostream>
using namespace std;
void sum(int);
int sum(int, int);
int sum(int, int, int);

int main()
{
    int x, y, z;
    cout << "enter the number";
    cin >> x >> y >> z;
    sum(x);
    cout << "sum " << sum(x, y) << endl;
    cout << "sum " << sum(x, y, z) << endl;
}
void sum(int a)
{
    cout << "sum " << (a + 10) << endl;
}
int sum(int a, int b)
{
    return (a + b);
}
int sum(int a, int b, int c)
{
    return (a + b + c);
}
/*enter the number1
2
3
sum 11
sum 3
sum 6
PS C:\Users\DELL\OneDrive\Desktop\c++> */

// ####################### on the basic of return types and data types ######################

#include <iostream>
using namespace std;

void som(int, int);
double sum(double, double);
int main()
{
    int x, y;
    double p, q;
    cout << "enter the no.";
    cin >> x >> y >> p >> q;
    som(x, y);
    cout << "sum " << sum(p, q);
}

void som(int a, int b)
{
    cout << "sum " << (a + b) << endl;
}
double sum(double a, double b)
{
    return (a + b);
}

/*enter the no.1
2
3
4
sum3
sum 7
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;

void sum(int, double);
double sum(double, int);

int main()
{
    int x, y;
    double p, q;
    cout << "enter the number";
    cin >> x >> y >> p >> q;
    sum(x, p);
    cout << "sum" << sum(p, y);
}
void sum(int a, double b)
{
    cout << "sum" << (a + b) << endl;
}
double sum(double a, int b)
{
    return (a + b);
}

/*enter the number9
8
7
6
sum16
sum15
PS C:\Users\DELL\OneDrive\Desktop\c++>*/