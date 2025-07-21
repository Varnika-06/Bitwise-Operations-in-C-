//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-4
//Program 2
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Bitwise AND of "<<a<<" and "<<b<<" is: "<<(a & b)<<endl;
    cout<<"Bitwise OR of "<<a<<" and "<<b<<" is: "<<(a | b)<<endl;
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ Program_2.cpp -o Program_2
PS C:\Users\DELL\Desktop\C++> .\Program_2.exe        
Enter first number: 5
Enter second number: 3
Bitwise AND of 5 and 3 is: 1
Bitwise OR of 5 and 3 is: 7
  */
