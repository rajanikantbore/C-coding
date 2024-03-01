#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter number :";
    cin >> number;

    switch (number)
    {
    case 1 ... 10:
        cout << number << " is part of range 1-10" << endl;
        break;
    case 21 ... 30:
        cout << number << " is part of range 1-10" << endl;
        break;

    default:
        cout << number << " is not part of any mentioned range" << endl;
        break;
    }
    return 0;
}