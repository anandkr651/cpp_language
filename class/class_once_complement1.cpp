// By default all the menber of the class is private.

#include <string>
#include <iostream>
using namespace std;

class binary
{
    string s;
    void check_binary(); 

public:
    void read();
    // void check_binary();
    void onse_complement();
    void display();
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::onse_complement(void)
{
    check_binary(); 
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
            s.at(i) = '0';
    }
}
void binary ::display(void)
{
    cout << "displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.check_binary();
    b.display();
    b.onse_complement();
    b.display();
}

/*enter a binary number
123456
incorrect binary format
PS C:\Users\DELL\OneDrive\Desktop\c++>


enter a binary number
11111000
displaying your binary number
11111000
displaying your binary number
00000111
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

/*enter a binary number
123
displaying your binary number
123
incorrect binary format
PS C:\Users\DELL\OneDrive\Desktop\c++>

enter a binary number
1100
displaying your binary number
1100
displaying your binary number
0011
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

/*enter a binary number
165
displaying your binary number
165
incorrect binary format
PS C:\Users\DELL\OneDrive\Desktop\c++>


enter a binary number
1100
displaying your binary number
1100
displaying your binary number
0011
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s = "anand";
    for (int i = 0; i < s.length(); i++)
        cout << s.at(i);
}
/*anand
PS C:\Users\DELL\OneDrive\Desktop\c++>*/