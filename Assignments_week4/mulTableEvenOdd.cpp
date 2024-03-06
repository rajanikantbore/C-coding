#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number :";
    cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        int mutliplication = number * i;

        if (mutliplication % 2 == 0)
        {
            cout << number << " * " << i << " = " << mutliplication << ", is Even number " << endl;
        }
        else
        {
            cout << number << " * " << i << " = " << mutliplication << ", is odd number " << endl;
        }
    }
    return 0;
}