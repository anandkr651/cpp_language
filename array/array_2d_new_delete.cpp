// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the size of an array";
//     cin >>n;
//     cout<<"enter the number";
//     int **arr=new int*[n];
//     for(int i=0;i<n;i++)
//     {
//         arr[i]=new int[n];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
/*enter the size of an array3
enter the number1
2
3
4
5
6
7
8
9
1 2 3 
4 5 6
7 8 9
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter the size of a row";
    cin >>row;
    cout<<"enter the size of a column";
    cin >>col;
    cout<<"enter the number";
    int **arr=new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}
/*enter the size of a row3
enter the size of a column2
enter the number1
2
3
4
5
6
1 2 
3 4
5 6
PS C:\Users\DELL\OneDrive\Desktop\c++>*/