/*
Scan the size of the array(N) and declare the array with size N. Read
N values and store them in an array one by one. Print the smallest
number in the array.
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
    }

    int smallest = number[0];
    for (int i = 1; i < n; i++)
    {
        if (number[i] < smallest)
        {
            smallest = number[i];
        }
    }
    cout << smallest << " ";

    return 0;
}