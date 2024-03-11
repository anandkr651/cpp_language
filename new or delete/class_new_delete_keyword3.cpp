#include<iostream>
using namespace std;
class Sample
{
private:
int i; float a;
public:
Sample()
{
i = 10;
a = 3.14f;
}
void showData()
{
cout << i << endl << a << endl;
}
~Sample()
{
cout << "Reached destructor" << endl;
}
};
int main()
{
Sample *ptr;
ptr = new Sample();
ptr->showData();
delete ptr;
}
/*10
3.14
Reached destructor
PS C:\Users\DELL\OneDrive\Desktop\c++> */