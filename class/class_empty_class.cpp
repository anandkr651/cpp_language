#include<iostream>
using namespace std;
class hero{
      //properties
};
int main()
{
  hero h1;
  cout<<"the size of the empty class "<<sizeof(h1);
}
/*the size of the empty class 1
PS C:\Users\DELL\OneDrive\Desktop\c++\class>*/

#include <iostream>
using namespace std;
class hero
{
public:
  int a;
  char ch;
  float b;
  void getdata()
  {
    cout << a;
  }
};
int main()
{
  hero h1;
  h1.a = 8;
  cout << "the size of the empty class " << sizeof(h1);
}
/*the size of the empty class 12
PS C:\Users\DELL\OneDrive\Desktop\c++\class> */

#include <iostream>
using namespace std;
class Sample
{
private:
  int i;
  float a;
  char ch;

public:
  Sample(int j, float b, char dh)
  {
    i = j;
    a = b;
    ch = dh;
  }
};
int main()
{
  Sample s1(10, 3.14f, 'A');
  Sample s2(20, 6.28f, 'B');
  cout << sizeof(s1) << endl;
  cout << sizeof(s2) << endl;
  return 0;
}
/*12
12
PS C:\Users\DELL\OneDrive\Desktop\c++\book>*/