/*
Write a C++ program to read two integer values(number1, number2)
and pass their address to a function called checking, change their
values in the checking function and display them in the checking
function. Display number1 and number2 in the main function and
observe the variable values with the variable values there in the
checking function.
*/

#include <iostream>
using namespace std;

void checking(int *number1, int *number2)
{
    *number1 = 100;
    *number2 = 200;
    cout << "This is checking function values :" << *number1 << " " << *number2 << endl;
}

int main()
{
    int number1 = 10, number2 = 20;
    checking(&number1, &number2);
    cout << "This is main method values:" << number1 << " " << number2 << endl;

    return 0;
}