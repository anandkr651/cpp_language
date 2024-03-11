#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("file_text4.txt");
    out << "this is me\n";
    out << "this is me also\n";
    out << "this is a radha\n";
    out << "this is a girl";
    out.close();

    // ifstream in;
    // string st,st2;
    // in.open("file_text4.txt");
    // in>>st>>st2;
    // cout<<st<<" "<<st2;
    // in.close();

    ifstream in;
    string st;
    in.open("file_text4.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    return 0;
}