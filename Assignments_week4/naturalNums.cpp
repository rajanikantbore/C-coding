#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter N value :";
    cin >> number;
    for (int i = number; i >= 1; i--)
    {
        cout << " " << i << " ";
    }

    return 0;
}