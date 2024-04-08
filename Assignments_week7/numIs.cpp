/*
Scan the size of the array(N) and declare the array with size N. Read
N values and store them in an array one by one. Read another
number and check whether that number is in the array or not.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int number[n];
    int number2;
    bool present ;

    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl;

    cin >> number2;

    for (int i = 0; i < n; i++)
    {
        if (number[i] == number2)
        {
            present = true;
            break;
        }
    }

    if (present)
    {
        cout << number2 << " is there in the array" << endl;
    }
    else
    {
        cout << number2 << " is NOT in the array" << endl;
    }

    return 0;
}
