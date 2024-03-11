#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two number";
    cin >> a >> b;
    cout << "addition of two number :- " << a + b << endl;
    cout << "substraction of two number :- " << a - b << endl;
    cout << "multiplication of two number :- " << a * b << endl;
    cout << "division of two number :- " << a / b << endl;
    cout << "modulas of two number :- " << a % b << endl;
}
/*enter two number8
2
addition of two number :- 10
substraction of two number :- 6
multiplication of two number :- 16
division of two number :- 4
modulas of two number :- 0
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two number";
    cin >> a >> b;
    cout << "greater than :- " << (a > b) << endl;
    cout << "smaller than :- " << (a < b) << endl;
    cout << "greater or equal than :- " << (a >= b) << endl;
    cout << "smaller or equal than :- " << (a <= b) << endl;
    cout << "equal than :- " << (a == b) << endl;
    cout << "not equal :- " << (a != b) << endl;
}
/*enter two number9
3
greater than :- 1
smaller than :- 0
greater or equal than :- 1
smaller or equal than :- 0
equal than :- 0
not equal :- 1
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    int a, d1, d2, d3, d4, d5, add, mul;
    cout << "enter the five digit number" << endl;
    cin >> a;
    d5 = a % 10;
    d3 = (a / 100) % 10;
    d1 = (a / 10000) % 10;
    add = d1 + d3 + d5;
    cout << "add alternate five digit number " << add << endl;
    d4 = (a / 10) % 10;
    d2 = (a / 1000) % 10;
    mul = d4 * d2;
    cout << "product of even position of five digit number " << mul << endl;
}
/*enter the five digit number
56789
add alternate five digit number 21
product of even position of five digit number 48
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include <iostream>
using namespace std;
int main()
{
    int i, s = 0;
    cout << "enter the number";
    while (1)
    {
        cin >> i;
        if (i == 999)
            break;
        if (i < 0)
            continue;
        s = s + i;
    }
    cout << "sum of the number" << s;
}
/*enter the number3
4
5
-2
-5
9
999
sum of the number21
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    int i, s = 0, p = 1;
    cout << "enter the number";
    while (1)
    {
        cin >> i;
        if (i == 999)
            break;
        if (i % 2 == 0)
            s = s + i;
        else
            p = p * i;
    }
    cout << "sum of even number" << s;
    cout << "\nproduct of odd number" << p;
}
/*enter the number3
4
5
6
999
sum of even number10
product of odd number15
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    int a[5], i, s = 0, p;
    cout << "enter the 5 number";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
        if (p = a[i] % 5)
            s = s + p;
    }
    cout << "sum of number" << s;
}
/*enter the 5 number12
13
14
15
16
sum of number10
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    int i, p = 0;
    cout << "enter the number";
    while (1)
    {
        cin >> i;
        if (i == 999)
            break;
        if (i > p)
            p = i;
    }
    cout << "greatest number is" << p;
}
/*enter the number4
5
6
2
999
greatest number is6
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include <iostream>
using namespace std;
int main()
{
    string i = "raja";
    cout << i;
}
/*raja
PS C:\Users\DELL\OneDrive\Desktop\c++> */

#include <iostream>
using namespace std;
int main()
{
    printf("hello world");
}

/*hello world
PS C:\Users\DELL\OneDrive\Desktop\c++> */

/*the disadvantage of using namespace std*/
#include <iostream>
// using namespace std;
int main()
{
    int cout = 5;
    std::cout << "cout " << cout;
}
