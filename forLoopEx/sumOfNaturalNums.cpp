/* 2. Write a program in C++ to find the sum of the first 10 natural numbers.
Sample Output:
Find the first 10 natural numbers:
---------------------------------------
The natural numbers are:
1 2 3 4 5 6 7 8 9 10
The sum of first 10 natural numbers: 55 */

#include <iostream>
using namespace std;

int main()
{
    cout << "The natural numbers are :" << endl;
    int n_number = 1, sum = 0  ;
    for (; n_number <= 10; n_number++)
    {
        cout <<" "<< n_number <<" ";
        sum = sum + n_number;
    }
    cout <<"\n The sum of first 10 natural numbers: " << sum;

    return 0;
}