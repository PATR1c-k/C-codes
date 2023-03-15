#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // ***issue***
    // int a = 45;
    // char c = 'c';
    // cout<<"The value of a was : "<<a<<endl;
    // cout<<"The value of c was : "<<c<<endl;
    // a = 23;
    // c = '4';
    // cout<<"The value of a now : "<<a<<endl;
    // cout<<"The value of c now : "<<c<<endl;

    // ***constants***
    // const int a = 3.14;
    // cout<<"The value of a was : "<<a<<endl;
    // a = 30;                      //you will get error here
    // cout<<"The value of a was : "<<a<<endl;

    // ****Manipulators**** -> help in data showing...(representation of data)
    // int a = 3, b = 78, c = 1233;
    // cout << "The value of a without setw is : " << a << endl;
    // cout << "The value of b without setw is : " << b << endl;
    // cout << "The value of c without setw is : " << c << endl;

    // cout << "The value of a with setw is : " << setw(4)<<a << endl;
    // cout << "The value of b with setw is : " << setw(4)<<b << endl;
    // cout << "The value of c with setw is : " << setw(4)<<c << endl;

    //*****operator Precedence******
    int a = 3,b = 4;
    int c = (5*a)+b-45+87;      //BODMAS rule not always true
    cout<<"Printing result : "<<c<<endl;

    return 0;
}
