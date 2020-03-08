#include<iostream>
using namespace std;
class First
{
    int i,x;
    char s[];

    public:
    First()  //Default Constructor
    {
        cout<<"constructor is called "<<x<<"\n\n";
    }
    First(int i, char s[])  //Parameterized Constructor
    {
        //x = i;
        cout<<"i is "<<i<<"\n";
        cout<<"s is "<<s<<"\n\n";
    }
    First(int i, int j, char s[])  //Copy Constructor
    {
       // x = j;
        cout<<"i is "<<i<<"\n";
        cout<<"j is " <<j<<"\n";
        cout<<"s is "<<s<<"\n\n";
    }
    void Func1(int i, char s[])  //member funtion
    {
        cout<<"i is "<<i<<"\n";
        cout<<"s is "<<s<<"\n\n";
    }
};
int main()
{
    char s[20];
    First c1;
    First c2(1,"parameterized constructor");
    First c3(2,2312,"copy constructor");

    c1.Func1(10,"false");
    //system("pause");
}