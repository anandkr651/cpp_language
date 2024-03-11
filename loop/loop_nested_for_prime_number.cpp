// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j,count;
//     for(i=1;i<50;i++)
//     {
//         count=0;
//         for(j=2;j<i;j++)
//         {
//             if(i%j==0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if(count==0&&i!=1)
//         cout<<i<<endl;
//     }
// }
/*2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
PS C:\Users\DELL\OneDrive\Desktop\c++> */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 100; i++)
//     {
//         for (j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//                 break;
//         }
//         if (i == j)
//         {
//             cout << "prime number" << i << endl;
//         }
//     }
// }
/*prime number2
prime number3
prime number5
prime number7
prime number11
prime number13
prime number17
prime number19
prime number23
prime number29
prime number31
prime number37
prime number41
prime number43
prime number47
prime number53
prime number59
prime number61
prime number67
prime number71
prime number73
prime number79
prime number83
prime number89
prime number97
PS C:\Users\DELL\OneDrive\Desktop\c++\loop>*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=100,count=0;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            count++;
            for(int j=2*i;j<n;j=j+i)
            {
                prime[j]=0;
            }
        }
    }
    cout<<count;
}
/*25
PS C:\Users\DELL\OneDrive\Desktop\c++\loop> */