#include<iostream>
using namespace std;

int main()
{
    //pointers --> datatype to hold address of other variable
    int a = 3;
    int *ptr = &a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;

    cout<<"-----------------------\n";
    // pointer to pointer  
    int **c = &ptr;
    cout<<c<<endl;

    //address of pointer of pointer of pointer
    cout<<"-----------------------\n";
    int ***d = &c;
    cout<<d<<endl;

    return 0;
}