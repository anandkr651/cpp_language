#include <iostream>
using namespace std;

class integer
{
private:
   int i;

public:
   void getdata()
   {
      cout << "enter any integer";
      cin >> i;
   }
   void setdata(int j)
   {
      i = j;
   }
   integer() {}
   integer(int j)
   {
      i = j;
   }
   void displaydata()
   {
      cout << "value of i " << i << endl;
   }
};
int main()
{
   integer i1(100), i2, i3;
   i1.displaydata();
   i2.setdata(200);
   i2.displaydata();
   i3.getdata();
   i3.displaydata();
}
/*value of i 100
value of i 200
enter any integer55
value of i 55
PS C:\Users\DELL\OneDrive\Desktop\c++>*/
