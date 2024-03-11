// #include <iostream>
// using namespace std;

// int count = 0;
// class num
// {
// public:
//     num()
//     {
//         count++;
//         cout << "this is the time when constructor is called for object number " << count << endl;
//     }
//     ~num()
//     {
//         cout << "this is the time when my destructor is called for object number " << count << endl;
//         count--;
//     }
// };
// int main()
// {
//     cout << "we are inside our main function " << endl;
//     cout << "creating first object n1 " << endl;
//     num n1;
//     {
//         cout << "entering this block" << endl;
//         cout << "creating two or more object" << endl;
//         num n2, n3;
//         cout << "exiting this block" << endl;
//     }
//     cout << "back to main" << endl;
// }
/*we are inside our main function
creating first object n1
this is the time when constructor is called for object number 1
entering this block
creating two or more object
this is the time when constructor is called for object number 2
this is the time when constructor is called for object number 3
exiting this block
this is the time when my destructor is called for object number 3
this is the time when my destructor is called for object number 2
back to main
this is the time when my destructor is called for object number 1
PS C:\Users\DELL\OneDrive\Desktop\c++> */

/*notes:---
static allocation  --> destructor automatically get called;
dynamic allocation --> destructor manually get called;
*/