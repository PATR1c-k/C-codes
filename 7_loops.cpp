#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 3 types of loops in cPP
    // 1 for 
    // 2 do while 
    // 3 while
    // loop -> for loop
    
    // ****for loop****
    // for (int i = 0; i < 20; i++)
    // {
    //     cout<<"I am in a for loop upto "<<i<<" times "<<endl;
    // }
    
    // ****infinite for loop**** 
    // for (int i = 0; 21<31; i++)
    // {
    //     cout<<i<<endl;
    // }

    // ****while loop****
    // int i = 0;
    // while (i<10)
    // {
    //     cout<<"I am in a while loop upto: "<<i<<" times"<<endl;
    //     i+=1;
    // }
    
     // ****do-while loop****
    // int r = 0;
    int r = 103;
    do
    {
        cout<<"I am single count of output!"<<endl;
        r++;
    } while (r<102);
    
    return 0;
}
