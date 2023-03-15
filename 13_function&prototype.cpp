#include <iostream>
using namespace std;

// function prototyping

// type function-name (argumnets)

int sum(int a, int b); // function prototyping    //a and b are formal parameters
int sum(int, int);     // Allso accepteble
void g();

int main()
{
    cout << "Hello world" << endl;
    cout << "Function to down approaching" << endl;

    g();
    cout << "The sum is : " << sum(32, 42);
    return 0;
}

int sum(int a, int b)
{
    // 32 and 42 are actual paramenters
    // c is formal parameter
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello good morning!";
}

// NOtes:
// Framl and actual parameters can be samed
// function prototypng was first implemented in cpp and then idea is used in c.