#include <iostream>
using namespace std;

class Account
{
private:
    int balance;
    static float roi;

public:
    void setBalance(int b)
    {
        balance = b;
    }
    static void setRoi(float r)
    {
        roi = r;
    }
    void show()
    {
        cout << "balance:" << balance << " ROI:" << roi << endl;
    }
};

float Account::roi = 3.5f;

int main(int argc, char const *argv[])
{

    Account a1;
    a1.setBalance(2000);
    Account::setRoi(12); // THis is how we can call static member function with out calling object.
    // a1.setRoi(2);   //With object it variably changes.
    a1.show();
    return 0;
}
