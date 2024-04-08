#include <iostream>
using namespace std;

int main()
{
    int col, row;
    cout << "Enter how many number of columns you need : ";
    cin >> col >> row;

    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}