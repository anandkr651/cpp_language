#include <iostream>
using namespace std;
void myfunction(char fname)
{
  cout << fname << " refsnes\n";
}
int main()
{
  myfunction('r');
  myfunction('c');
}

/*r refsnes
c refsnes
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

// ######################################### string is a data types in c++

#include <iostream>
using namespace std;
void myfunction(string fname)
{
  cout << fname << " refsnes\n";
}
int main()
{
  myfunction("raja");
  myfunction("anand");
}
/*raja refsnes
anand refsnes
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include <iostream>
using namespace std;
void myfunction(string fname, int age)
{
  cout << fname << " refsnes " << age << " years old \n";
}
int main()
{
  myfunction("lima", 3);
  myfunction("jenny", 14);
  myfunction("anja", 30);
}
/*lima refsnes 3 years old
jenny refsnes 14 years old
anja refsnes 30 years old
PS C:\Users\DELL\OneDrive\Desktop\c++> */