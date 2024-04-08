// Write a program to find the factorial of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num;
   // int factorial = 1;
    int multi = 1;

    cout << "Enter number :";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        multi = multi * i;
    }
    cout << multi;

    return 0;
}