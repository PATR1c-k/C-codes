#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // selection control structures --> if else case

    // int age;
    // cout << "Enter you age : ";
    // cin >> age;
    // if (age <= 0 || age >= 100)
    // {
    //     cout << "Are you already drunk! write age correctly!" << endl;
    // }
    // else if (age < 18)
    // {
    //     cout << "You are not allowed in party" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "YOu will be allowed if carried a kids pass" << endl;
    // }
    // else
    // {
    //     cout << "Oh yeah come on floor is waiting!" << endl;
    // }


    // selection control structures --> switch case
    int age;
    cout << "Tell me your age!: ";
    cin>>age;
    switch (age)
    {
    case 10:
        cout << "Your age is 10" << endl;
        break;
    case 18:
        cout << "Your age is 18" << endl;
        break;
    case 22:
        cout << "Your age is 22" << endl;
        break;
    case 100:
        cout << "Your age is 100" << endl;
        break;

    default:
        cout << "No special caase!";
        break;
    }

    cout << "Programme ended";
    return 0;
}
