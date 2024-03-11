#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {
        cout<<"my self anand bhagat"<<endl;
    }
};
class cwhvidoes : public cwh
{
    float videolength;

public:
    cwhvidoes(string s, float r, float vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is the amazing vidoes with title " << title << endl;
        cout << "rating " << rating << " out of 5 stars" << endl;
        cout << "length of this vidoes is " << videolength << " minutes" << endl;
    }
};
class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amazing text tutorial with title " << title << endl;
        cout << "rating of this text tutorial " << rating << " out of 5 stars" << endl;
        cout << "no of words in the text tutorial is " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating,vlen;
    int words;
    
    title="django tutorial";
    vlen=4.56;
    rating=4.89;
    cwhvidoes djvideo(title,rating,vlen);
    // djvideo.display();

    title="django tutorial text";
    words=332;
    rating=4.19;
    cwhtext djtext(title,rating,words);
    // djtext.display();

    cwh *tut[2];
    tut[0]=&djvideo;
    tut[1]=&djtext;

    tut[0]->display();
    tut[1]->display();
    return 0;
}
/*this is the amazing vidoes with title django tutorial
rating 4.89 out of 5 stars
length of this vidoes is 4.56 minutes
this is an amazing text tutorial with title django tutorial text
rating of this text tutorial 4.19 out of 5 stars
no of words in the text tutorial is 332 words
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

/*rules for virtual function
  1. they cannot be static
  2. they are accessed by object pointer
  3. virtual function can be a friend of another class
  4. a virtual function in the base class might not be used
  5. if a virtual function is defined in a base class , there is no necessity of redefing it in the derived class
*/