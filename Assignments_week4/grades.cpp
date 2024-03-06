#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks :";
    cin >> marks;
    switch (marks)
    {
    case 85 ... 100:
        cout << "A+ grade" << endl;
        break;
    case 71 ... 84:
        cout << "A grade" << endl;
        break;
    case 56 ... 70:
        cout << "B grade" << endl;
        break;
    case 41 ... 55:
        cout << "C grade" << endl;
        break;
    case 1 ... 40:
        cout << "D grade" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
        break;
    }
    return 0;
}