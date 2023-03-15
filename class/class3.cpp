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
};

float Account::roi = 3.5f; // This is static and is declared and setted event there is no object made.

int main(int argc, char const *argv[])
{
    // On other hand if multiple object made so for all of them the value of ROI is now same and not Assigned value multiple time.
    Account a1;
    return 0;
}
