// #include <iostream>
// using namespace std;
// void swap(int, int);
// void pswap(int *, int *);
// void mswap(int &, int &);

// int main()
// {
//     int x = 10, y = 20;
//     cout << "x " << x << " y " << y << endl;
//     swap(x, y);
//     cout << "x " << x << " y " << y << endl;
//     pswap(&x, &y);
//     cout << "x " << x << " y " << y << endl;
//     mswap(x, y);
//     cout << "x " << x << " y " << y << endl;
// }

// void swap(int a, int b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
// void pswap(int *a, int *b)
// {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }
// void mswap(int &a, int &b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
/*
x 10 y 20
x 10 y 20
x 20 y 10
x 10 y 20
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include<iostream>
using namespace std;
// prototype declarations
void swapv (int, int);
void swapr (int &, int &);
void swapa (int *, int *);
int main()
{
int a =10, b = 20;
swapv (a, b); // call by value
cout << endl << a << "\t" << b;
swapa (&a, &b); // call by address
cout << endl << a << "\t" << b;
swapr (a, b); // call by reference
cout << endl << a << "\t" << b << endl;
return 0;
}
void swapv (int i, int j)
{
int t;
t = i;
i = j;
j = t;
cout << i << "\t" << j;
}
void swapa (int *i, int *j)
{
int t;
t = *i;
*i = *j;
*j = t;
}
void swapr (int &i, int &j)
{
int t;
t = i;
i = j;
j = t;
}
/*20      10
10      20
20      10
10      20
PS C:\Users\DELL\OneDrive\Desktop\c++>*/