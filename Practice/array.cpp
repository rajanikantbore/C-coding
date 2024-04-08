#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    int number2;
    bool isPresent;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        // cout << "In " << i << " Index " << array[i] << " is there." << endl;
        cout << array[i] << " ";
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << array[i] << " ";
    //         cout << "In " << i << " Index " << array[i] << " is there." << endl;
    //     }
    // }

    cin >> number2;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == number2)
        {
            isPresent = true;
        }
    }
    if (isPresent)
    {
        cout << "YES";
    }
    else
    {
        cout << "No";
    }

    return 0;
}