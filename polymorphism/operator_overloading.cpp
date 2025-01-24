// #include<iostream>
// using namespace std;
// class B
// {
//     public:
//     int a,b;
//     int add()
//     {
//         return a+b;
//     }
//     void operator+(B &obj)
//     {
//         int value1=this->a;
//         int value2=obj.a;
//         cout<<"output "<<value2-value1<<endl;
//     }
//     void operator() ()
//     {
//         cout<<"mai bracket hu "<<this->a<<endl;
//     }
// };
// int main()
// {
//     B obj1,obj2;
//     obj1.a=4;
//     obj2.a=7;
//     obj1+obj2;

//     obj1();
// }
// /*output 3
// mai bracket hu 4
// PS C:\Users\DELL\OneDrive\Desktop\c++\friend function>*/

#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(int x,int y){
        real=x;
        imag=y;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i";
    }
    complex(){}
    complex operator+ (complex &y){
        complex t;
        t.real=real * y.real;
        t.imag=imag * y.imag;
        return t;
    }
};
int main(){
    complex c1(2,4),c2(3,9);
    complex c3=c1+c2;
    c3.display();
}
/*6 + 36i
PS D:\cpp\friend function> */
