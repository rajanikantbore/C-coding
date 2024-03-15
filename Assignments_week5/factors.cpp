/* Write a C++ program to read an integer number and print the factors
of that number. [Which numbers divides that number are called
factors of that number, ex : number = 6, factors : 1, 2, 3, 6]  */

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter number : ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << ", ";
        }
    }
    return 0;
}