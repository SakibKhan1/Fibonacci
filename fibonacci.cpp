/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 D
This program will compute Fibonacci numbers with loops and arrays.
*/
#include <iostream>
using namespace std;

int main()
{
    int fib[60] = {0,1};
    //60 elements
    cout << fib[0] << " " << fib[1];
    for (int i = 0; i < 60; i++)
    {
        if (i != 0 and i != 1)
        {
            fib[i] = fib[i-1] +fib[i-2]; //fibonacci formula if not 0 or 1 
        }cout << fib[i] << endl;
    }
    return 0;
}
