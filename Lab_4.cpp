//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-4
//Program 1

#include<iostream>
using namespace std;
int main()
{
    int a=5, b=3;
    //Bitwise AND
    cout<<"Bitwise AND of "<<a<<" and "<<b<<" is: "<<(a & b)<<endl;
    //Bitwise OR   
    cout<<"Bitwise OR of "<<a<<" and "<<b<<" is: "<<(a | b)<<endl;
    //Bitwise XOR
    cout<<"Bitwise XOR of "<<a<<" and "<<b<<" is: "<<(a ^ b)<<endl;
    //Bitwise NOT
    cout<<"Bitwise NOT of "<<a<<" is: "<<(~a)<<endl;
    cout<<"Bitwise NOT of "<<b<<" is: "<<(~b)<<endl;
    //Left Shift
    cout<<"Left Shift of "<<a<<" by 1 is: "<<(a << 1)<<endl;
    cout<<"Left Shift of "<<b<<" by 1 is: "<<(b << 1)<<endl;
    //Right Shift
    cout<<"Right Shift of "<<a<<" by 1 is: "<<(a >> 1)<<endl;
    cout<<"Right Shift of "<<b<<" by 1 is: "<<(b >> 1)<<endl;
    return 0;
}
/*
S C:\Users\DELL\Desktop\C++> g++ Lab_4.cpp -o Lab_4
PS C:\Users\DELL\Desktop\C++> .\Lab_4.exe        
Bitwise AND of 5 and 3 is: 1
Bitwise OR of 5 and 3 is: 7
Bitwise XOR of 5 and 3 is: 6
Bitwise NOT of 5 is: -6
Bitwise NOT of 3 is: -4
Left Shift of 5 by 1 is: 10
Left Shift of 3 by 1 is: 6
Right Shift of 5 by 1 is: 2
Right Shift of 3 by 1 is: 1
  */
