#include<iostream>
using namespace std;
int i=0;
int i1=0;
int main()
{
    //Array example
    int marks[] = {12,13,10,14,15};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"MArks are : "<<marks[i]<<endl;
    // }
    
    // cout<<"----------------------------------------------------\n";
    // do
    // {
    //     cout<<"MArks are : "<<marks[i]<<endl;
    //     i++;
    // } while (i<5);
    // cout<<"----------------------------------------------------\n";
   
    // while (i1<5)
    // {
    //     cout<<"MArks are : "<<marks[i1]<<endl;
    //     i1++;
    // }
    
    // // taking input and storing it in an array
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Enter a number one by one : ";
    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"MArks are : "<<marks[i]<<endl;
    // }

    // Pointer and array
    int *p = marks;
    // print values in an array
    for (int i = 0; i < 5; i++)
    {
        cout<<"The value at marks["<<i<<"] : "<<*(p+i)<<endl; 
    }
    
    // this will print address block by block
    for (int i = 0; i < 5; i++)
    {
        cout<<(p+i)<<endl;
    }
    
    
    return 0;
}