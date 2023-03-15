#include <iostream>
using namespace std;

struct book
{
    int bookid;
    string title;
    float price;
} b1, b2; // this is just a decleration so it dosent consume space in ram.

int main(int argc, char const *argv[])
{
    // book b1; b1 it will consume 26bits of block size
    // b1 = {12, "monster", 450.0};
    // b2.title = "The book of odin ";
    // cout << b1.bookid << endl;
    // cout << b1.title << endl;
    // cout << b1.price << endl;

    // getting input from user
    book b1;
    cout << "Enter bookid, title and price:";
    cin >> b1.bookid >> b1.title >> b1.price;
    cout << b1.bookid << " " << b1.title << " " << b1.price;
    return 0;
}
