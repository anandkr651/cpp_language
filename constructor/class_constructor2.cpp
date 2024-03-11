#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};
bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void bankdeposit ::show()
{
    cout << "principal amount was " << principal << " return value after " << year << " is " << returnvalue << endl;
}

int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    //explicit call
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p, y and R" << endl;
    cin >> p >> y >> R;
    //explicit call
    bd2 = bankdeposit(p, y, R);
    bd2.show();
}
/*enter the value of p, y and r
100
2
10
principal amount was 100 return value after 2 is 121
enter the value of p, y and R
200
5
13
principal amount was 200 return value after 5 is 368.487
PS C:\Users\DELL\OneDrive\Desktop\c++>*/