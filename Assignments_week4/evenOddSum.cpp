#include <iostream>
using namespace std;

int main()
{
    int number;
    int evenSum, oddSum = 0;
    int evenCount = 0;
    int oddCount = 0;

    std::cout << "Enter number: ";
    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
            evenCount++;
        }
    }
    std::cout << "Even numbers sum : " << evenSum << endl;

    for (int j = 1; j <= number; j++)
    {
        if (j % 2 == 1)
        {
            oddSum = oddSum + j;
            oddCount++;
        }
    }

    std::cout << "Odd numbers sum : " << oddSum << endl;
    std::cout << "Even numbers from 1 to " << number << " is :" << evenCount << endl;
    std::cout << "Odd numbers from 1 to " << number << " is :" << oddCount << endl;

    return 0;
}
