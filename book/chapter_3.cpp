#include <iostream>
using namespace std;
void fun();
int main()
{
   int a = 30;
   fun();
   return 0;
}
void fun()
{
   int b = 20;
}

#include <iostream>
using namespace std;
void fun()
{
   cout << "Hello";
}
int main()
{
   fun();
   return 0;
}
/*Hello
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

#include <iostream>
using namespace std;
int main()
{
   void fun1();
   void fun2();
   fun1();
   return 0;
}
void fun1(void)
{
   fun2();
   cout << endl
        << "Hi…Hello";
}
void fun2(void)
{
   cout << endl
        << "to you";
}
/*chapter_3.cpp: In function 'void fun1()':
chapter_3.cpp:40:1: error: 'fun2' was not declared in this scope; did you mean 'fun1'?
   40 | fun2();
      | ^~~~
      | fun1
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

// #include <iostream>
// using namespace std;
// void fun(int i = 10, float a = 3.14)
// {
//    cout << i << a;
// }
// int main()
// {
//    fun();
//    return 0;
// }
/*103.14
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/

// #include <iostream>
// using namespace std;
// void fun(int, float);
// int main()
// {
//    fun();
//    return 0;
// }
// void fun(int i = 10, float a = 3.14) // we cannot initilise in the function defination area
// {
//    cout << i << a;
// }
/*error*/

// #include <iostream>
// using namespace std;
// void fun(int = 10, int = 20, int = 30);
// void fun(int, int);
// int main()
// {
//    fun(1, 2);
//    return 0;
// }
// void fun(int x, int y, int z)
// {
//    cout << endl
//         << x << endl
//         << y << endl
//         << z;
// }
// void fun(int x, int y)
// {
//    cout << endl
//         << x << endl
//         << y;
// }
/*error because call ambiguite */