#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // conneting our file with hout stream
    ofstream hout("file_text3.txt");

    // creating a name string and filling it with the string entered by the user
    cout << "enter your name ";
    string name;
    cin >> name;

    // writing a string to the file
    hout << "my name is " << name << endl;
    hout.close();

    ifstream hin("file_text3.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout << "the content of the file is " << content << endl;
    hin.close();
}
