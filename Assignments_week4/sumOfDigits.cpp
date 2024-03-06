#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    cout << "Enter number :";
    cin >> number;
    while (number > 0)
    {
        int digit = (number % 10);
        sum = sum + digit;
        number /= 10;
    }
    cout <<"Digits sum of " << number << " is :" << sum;

    return 0;
}