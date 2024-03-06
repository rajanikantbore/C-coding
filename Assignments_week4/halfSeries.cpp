#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    int numResult = num / 2;
    // cout << numResult;

    for (int i = 2; i <= numResult; i++)
    {
        cout << " " << i << " ";
    }

    return 0;
}