#include <iostream>
using namespace std;

// int main()
// {
//     int a=4;
//     int *ptr=&a;
//     *ptr=99;
//     cout<<"the value of a is "<<*(ptr)<<endl;
//     cout<<"the value of a is "<<a<<endl;
//     return 0;
// }

int main()
{
    int *p = new int(40);
    cout << "the value at address p is " << *p << endl;
    float *o = new float(490.0978);
    cout << "the value at address o is " << *o << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    cout << "the value of arr[0] is " << arr[0] << endl;
    cout << "the value of arr[1] is " << arr[1] << endl;
    cout << "the value of arr[2] is " << arr[2] << endl;
    delete[] arr;
    cout << "the value of arr[0] is " << arr[0] << endl;
    cout << "the value of arr[1] is " << arr[1] << endl;
    cout << "the value of arr[2] is " << arr[2] << endl;

    return 0;
}
/*the value at address p is 40
the value at address o is 490.098
the value of arr[0] is 10
the value of arr[1] is 20
the value of arr[2] is 30
the value of arr[0] is 188767616
the value of arr[1] is 565
the value of arr[2] is 188744016
PS C:\Users\DELL\OneDrive\Desktop\c++>*/