#include<iostream>
using namespace std;

// structures
typedef struct Employee
{
    int eID;
    char Batch;
    float salary;
}ep;

// Union
typedef union money
{
    int rice;
    char car;
    float pounds;
}m;

//driver code
int main()
{
    ep harry;
    ep mohit;
    ep pratik;
    harry.eID = 1;
    harry.Batch = 'a';
    harry.salary = 10000;
    cout<<"The value of eID is "<<harry.eID<<endl;
    cout<<"The value of batch is "<<harry.Batch<<endl;
    cout<<"The value of salary is "<<harry.salary<<endl;

    m m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car<<endl;
    cout<<m1.rice<<endl;  //you will get error here because you cant use more than 1 element from an union

    cout<<"---------------------------------------\n";
    // easy distinguish between struct and union
    cout<<"Size of struct is : "<<sizeof(money)<<endl;
    cout<<"Size of Union  is : "<<sizeof(Employee)<<endl;

    cout<<"---------------------------------------\n";
    enum meal{ breakfast , lunch , dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}