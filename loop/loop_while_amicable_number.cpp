/* the smallest pair of amicable number is (220,284). they are amicable because the proper divisisor
 of 220 are 1,2,4,5,10,11,20,22,44,55,110, of which the sum is 284 ; and the proper divisor of 284 are 
 1,2,4,71 and 142 of which the sum is 220 */


#include<iostream>
using namespace std;
int main()
{
      int a,b,i=1,j=1,s=0,p=0;
        cout<<"enter two number"<<endl;
        cin>>a>>b;
        while(a>i)
        {
            if(a%i==0)
            {    
                //cout<<"display the factor of a "<<i<<endl;
                s=s+i;
            }
            i++;
        }
         while(b>j)
        {
            if(b%j==0)
            {     
                //cout<<"display the factor of b "<<j<<endl;
                 p=p+j;
            }
            j++;
        }
            if(s==b&&p==a)
            cout<<"both are "<<s<<","<<p<<" this is amicable number";
            else
              cout<<" this is not amicable number";
        
}
/*enter two number
220
284
both are 284,220 this is amicable number
PS C:\Users\DELL\OneDrive\Desktop\c++>*/


/*enter two number
220
248
 this is not animabal number
PS C:\Users\DELL\OneDrive\Desktop\c++> */