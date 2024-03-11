#include<iostream>
using namespace std;
int main()
{
    int i,num,d,s,fd;
    for(i=1;i<=1000;i++)
    {
        fd=i%10;
        num=i/10;
        s=0;
        while(num>0)
        {
            d=num%10;
            s=s+d;
            num=num/10;
        }
        if(fd==s)
        cout<<"dracula number is "<<i<<endl;
    }
}
/*dracula number is 11
dracula number is 22
dracula number is 33
dracula number is 44
dracula number is 55
dracula number is 66
dracula number is 77
dracula number is 88
dracula number is 99
dracula number is 101
dracula number is 112
dracula number is 123
dracula number is 134
dracula number is 145
dracula number is 156
dracula number is 167
dracula number is 178
dracula number is 189
dracula number is 202
dracula number is 213
dracula number is 224
dracula number is 235
dracula number is 246
dracula number is 257
dracula number is 268
dracula number is 279
dracula number is 303
dracula number is 314
dracula number is 325
dracula number is 336
dracula number is 347
dracula number is 358
dracula number is 369
dracula number is 404
dracula number is 415
dracula number is 426
dracula number is 437
dracula number is 448
dracula number is 459
dracula number is 505
dracula number is 516
dracula number is 527
dracula number is 538
dracula number is 549
dracula number is 606
dracula number is 617
dracula number is 628
dracula number is 639
dracula number is 707
dracula number is 718
dracula number is 729
dracula number is 808
dracula number is 819
dracula number is 909
PS C:\Users\DELL\OneDrive\Desktop\c++>*/