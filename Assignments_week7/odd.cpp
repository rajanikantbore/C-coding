/*
Read the size of the array (N) and declare the array with size N.
Read N values and store them in an array. Print the values of the
array whose indices are odd.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number[n];

    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
        number[i];
    }
    for (int i = 0; i < n; i++)
    {
        // cout << number[i] << " ";
        if (i % 2 == 1)
        {
            cout << number[i] << " ";
        }
    }

    return 0;
}