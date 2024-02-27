#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks :";
    cin >> marks;

    if (marks >= 80 && marks <= 100)
    {
        cout << "Marks are above 80" << endl;
        cout << "marks are between the range of 80-100 " << endl;
    }
    else if (marks >= 70 && marks <= 80)
    {
        cout << "Marks are above 70" << endl;
        cout << "marks are between the range of 70-80 " << endl;
    }
    else if (marks >= 50 && marks <= 70)
    {
        cout << "marks are above 50" << endl;
        cout << "marks are between range of 50-70" << endl;
    }
    else if (marks >= 40 && marks <= 50)
    {
        cout << "marks are above 40" << endl;
        cout << "marks are between 40-50" << endl;
    }
    else
    {
        cout << "Fail..!" << endl;
    }

    return 0;
}