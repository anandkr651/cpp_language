#include <iostream>
#include <fstream>
/*
the useful classes for working with files in c++ are:-
   1. fstreambase
   2. ifstream ----> derived from fstreambase
   3. ofstream ----> derived from fstreambase
   */
/*
in order work with files in c++ you will have to open it, primarily, there are 2 ways to open a file:
  1. using the constructor
  2. using the member function open() of the class*/

using namespace std;
int main()
{
  string st = "hello friends";
  // opening files using constructor and writing it
  ofstream out("file_text1.txt");
  out << st;

  // opening files using constructor and reading it
  string str;
  ifstream in("file_text2.txt");
  in>>str;    //a single word can be display on it.
  cout<<str;

  string str2;
  ifstream in("file_text2.txt");
  getline(in, str2);      //a sentence can be display on it
  cout << str2;
  return 0;
}