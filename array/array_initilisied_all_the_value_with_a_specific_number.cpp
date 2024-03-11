#include<iostream>
using namespace std;
#define N 5

int main()
{
    int x[N],i;
    fill_n(x,5,12);
    for(i=0;i<N;i++)
    {
        cout<<x[i]<<endl;
    }
}
/*12
12
12
12
12
PS C:\Users\DELL\OneDrive\Desktop\c++\array>*/