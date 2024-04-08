#include <iostream>
using namespace std;

int readNumber()
{
    int number;
    cin >> number;
    return number;
}
int main()
{
    int number = readNumber();
    cout << number;
    return 0;
}