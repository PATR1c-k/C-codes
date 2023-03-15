#include<iostream>
using namespace std;

inline int product(int a,int b)
{
    return a*b;
}

float moneyReceived(int currentMoney,float factor=1.04)
{

    return currentMoney*factor;
}

// int strlen(const char *p)
// {

// }

int main()
{
    // inline function
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b : "<<product(a,b)<<endl;
    // cout<<"The product of a and b : "<<product(a,b)<<endl;
    // cout<<"The product of a and b : "<<product(a,b)<<endl;
    // cout<<"The product of a and b : "<<product(a,b)<<endl;
    // cout<<"The product of a and b : "<<product(a,b)<<endl;
    // cout<<"The product of a and b : "<<product(a,b)<<endl;
    // cout<<"The product of a and b : "<<product(a,b)<<endl;

    int money = 100000;
    // example of default argument
    cout<<"If you have "<<money<<" Rs in your account , you will receive "<<moneyReceived(money)<<" Rs. after 1 year"<<endl;
    // giving parameters
    cout<<"If you have "<<money<<" Rs in your account , you will receive "<<moneyReceived(money,1.1)<<" Rs. after 1 year"<<endl;
    return 0;
}
