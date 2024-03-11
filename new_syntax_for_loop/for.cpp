#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 7, 3, 9, 2};
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int n : {2, 6, 4, 9, 0})
    {
        cout << n << " ";
    }
    cout << endl;

    string str = "my name is anand";
    for (char ch : str)
    {
        cout << ch << " ";
    }
    cout << endl;
}
/*5 4 7 3 9 2
2 6 4 9 0
m y   n a m e   i s   a n a n d
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */