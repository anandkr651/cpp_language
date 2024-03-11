#include <iostream>
using namespace std;
class roman
{
private:
    unsigned long num;

public:
    roman(unsigned long n);
    friend ostream &operator<<(ostream &o, roman &r);
};
roman ::roman(unsigned long n)
{
    num = n;
}
ostream &operator<<(ostream &o, roman &r)
{
    struct key
    {
        char ch;
        int val;
    };
    key z[] = {
        {'m', 1000}, {'d', 500}, {'c', 100}, {'l', 50}, {'x', 10}, {'v', 5}, {'i', 1}};
    int sz, k;
    sz = sizeof(z) / sizeof(z[0]);
    for (int i = 0; i < sz; i++)
    {
        k = r.num / z[i].val;
        for (int j = 1; j <= k; j++)
            o << z[i].ch;
        r.num = r.num % z[i].val;
    }
    return o;
}
int main()
{
    long yr = 2019;
    cout << roman(yr);
    cout << endl << roman(1752) << endl;
    return 0;
}