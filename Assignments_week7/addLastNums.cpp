#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number[n];

    if (n < 4)
    {
        cout << "Array size is less than four" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << number[i] << " ";
    }

    int sum = number[0] + number[1] + number[n - 2] + number[n - 1];
    cout << "Sum of the first and last two numbers: " << sum << endl;

    return 0;
}
