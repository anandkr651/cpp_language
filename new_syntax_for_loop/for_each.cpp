/*  notes:---
   c++ also allows using another functionality that solve the same purpose termed "for_each" loops.
   this loop accepts a function that executes over each of the container elements.this loop is 
   defined in the header file "algorithim" and hence has to be included for this loop's successful
   operation.

   syntax :--
   for_each(inputiterator first,inputiterator last ,function fn) 
*/

#include<iostream>
#include<algorithm>
using namespace std;
int print_even(int n)
{
    if(n%2==0)
    {
        cout<<n<<" ";
    }
    return 0;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"the array contains the following even numbers"<<endl;
    for_each(arr,arr+5,print_even);
    return 0;
}
/*the array contains the following even numbers
2 4 
PS C:\Users\DELL\OneDrive\Desktop\cpp\new_syntax_for_loop>*/