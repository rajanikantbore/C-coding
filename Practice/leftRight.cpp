#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    int left = 0;
    int right = n - 1;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    while (left <= right)
    {
        cout << array[left++] << " ";
        if (left <= right)
        {
            cout << array[right--] << " ";
        }
    }

    return 0;
}