#include<iostream>
using namespace std;
int c = 45;
int main()
{
    //******Build in datatype******
    // int a,b,c;
    // cout<<"Enter value for a "<<endl;
    // cin>>a;
    // cout<<"Enter value for b "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The (a + b) is : "<<c<<endl;
    // cout<<"The global operator is "<<::c<<endl;  //scope resolution operator

    //******float,double and long literals******
    float d = 38.4f;
    long double e = 89.42l;
    cout<<"The size of 34.4  : "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f : "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F : "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l : "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L : "<<sizeof(34.4L)<<endl;
    cout<<"The value of d    : "<<d<<endl;
    cout<<"The value of e    : "<<e<<endl;

    //*****Referancing Variables******
    // Pratik -> pratu ->rockybhai ->PATR1c
    int x = 384;
    int &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // ******Typcasting******
    int i = 45;
    float f = 32.2;
    cout<<"The value of i is : "<<(float)i<<endl;
    cout<<"The value of i is : "<<float(i)<<endl;

    cout<<"The value of f is : "<<(int)f<<endl;
    cout<<"The value of f is : "<<int(f)<<endl;

    int c = int(f);
    cout<<endl;

    cout<<"The expression is "<<i + f<<endl;
    cout<<"The expression is "<<i + int(f)<<endl;
    cout<<"The expression is "<<i + (int)f<<endl;
    return 0;
}
