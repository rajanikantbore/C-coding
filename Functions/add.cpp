#include <iostream>
using namespace std;

int add(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    return sum ;
}

int main()
{
    cout << add(10, 15, 30);
    return 0;
}