#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter number :";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }

    return 0;
}