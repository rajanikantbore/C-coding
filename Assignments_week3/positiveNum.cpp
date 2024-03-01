#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number :" << endl;
    cin >> number;

    if (number > 0)
    {
        cout << "Positive number" << endl;
    }
    else if (number == 0)
    {
        cout << "Zero" << endl;
    }
    else
    {
        cout << "Negative number" << endl;
    }
    return 0;
}