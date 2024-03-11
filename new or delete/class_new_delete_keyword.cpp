// #include <iostream>
// using namespace std;

// class complex
// {
//     int real, imaginary;

// public:
//     void getdata()
//     {
//         cout << "the real part is " << real << endl;
//         cout << "the imaginary part is " << imaginary << endl;
//     }
//     void setdata(int a, int b)
//     {
//         real = a;
//         imaginary = b;
//     }
// };
// int main()
// {
//     complex c1;
//     c1.setdata(3,6);
//     c1.getdata();
//     return 0;
// }
/*the real part is 3
the imaginary part is 6
PS C:\Users\DELL\OneDrive\Desktop\c++> */

// int main()
// {
//     complex c1;
//     complex *ptr=&c1;
//     (*ptr).setdata(3,6);
//     (*ptr).getdata();
//     return 0;
// }
/*the real part is 3
the imaginary part is 6
PS C:\Users\DELL\OneDrive\Desktop\c++> */

// int main()
// {
//     complex *ptr=new complex;
//     (*ptr).setdata(3,6);
//     (*ptr).getdata();
//     return 0;
// }
/*the real part is 3
the imaginary part is 6
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

// int main()
// {
//     complex *ptr=new complex;
//     ptr->setdata(3,6);
//     ptr->getdata();
//     return 0;
// }
/*the real part is 3
the imaginary part is 6
PS C:\Users\DELL\OneDrive\Desktop\c++> */

// int main()
// {
//     complex *ptr1 = new complex[4];
//     ptr1->setdata(3, 6);
//     ptr1->getdata();
//     (ptr1 + 1)->setdata(3, 6);
//     (ptr1 + 1)->getdata();
//     return 0;
// }
/*the real part is 3
the imaginary part is 6
the real part is 3
the imaginary part is 6
PS C:\Users\DELL\OneDrive\Desktop\c++> */

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch='q';
//     cout<<sizeof(ch)<<ch<<endl;

//     char *c=&ch;                                            //important
//     cout<<sizeof(c)<<c<<endl;

//     char *p=new char;
//     p=&ch;
//     cout<<sizeof(p)<<p<<endl;
// }
/*1q
8q
8q/√ K☺
PS C:\Users\DELL\OneDrive\Desktop\c++*/

#include<iostream>
using namespace std;
int getsum(int *ar,int n)
{
    int sum=0;
    for(int j=0;j<n;j++)
    {
        sum +=ar[j];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    cout<<"enter the number"<<endl;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=getsum(arr,n);
    cout<<"sum of the all number "<<ans<<endl;
    delete []arr;
}
/*enter the size of an array
5
enter the number
1
2
3
4
5
sum of the all number 15
PS C:\Users\DELL\OneDrive\Desktop\c++>*/