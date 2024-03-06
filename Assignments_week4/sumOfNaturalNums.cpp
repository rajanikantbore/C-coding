#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;
    cout << "Enter number :";
    cin >> number;
    int i = 1;
    for (; i <= number; i++)
    {
        // cout << i;
        sum = sum + i;
    }
    cout << "Sum of i to " << number << " is :" << sum << endl;
    int mul = 2 * number;
    cout << "2 * " << number << " + " << sum << " is " << mul + sum;
    return 0;
}