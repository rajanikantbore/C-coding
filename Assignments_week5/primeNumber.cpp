/* Write a C++ program to check whether a given number is a prime
number or not. [If a number is divisible by only 1 and itself then that
number is called as prime number] */

#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = 1;
    cout << "Enter a number : ";
    cin >> number;

    if (number <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0;
            }
        }
    }

    if (isPrime)
    {
        cout << number << " is prime number " << endl;
    }
    else
    {
        cout << number << " is not prime number " << endl;
    }

    return 0;
}

/*Note: Here is short explanation.
- In line number 11- we are declaring isPrime is boolean variable and default setting is true.
- In line number 15- we are checking, is number(user input number) is less than or equal to 1. The reason for checking is that in prime number's case less than 1 numbers are not prime.
*/