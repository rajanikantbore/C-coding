/*  Write a program to pass two integer values to a function named
addition and return their sum. Display the sum in the main function.    */

#include <iostream>
using namespace std;

int namedAddition(int num1, int num2)
{
    cin >> num1 >> num2;
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a, b;
    int addition = namedAddition(a, b);
    cout << "Sum is " << addition;
    return 0;
}