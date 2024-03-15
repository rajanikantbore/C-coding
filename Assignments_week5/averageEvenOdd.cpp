/*Write a C++ program to print the average of even numbers and odd
numbers from 1 to 100 using do while loop.*/

#include <iostream>
using namespace std;

int num = 1;
int evenSum;
int oddSum;
int countEven = 0;
int countOdd = 0;

int main()
{
    do
    {
        if (num % 2 == 0)
        {
            // cout << num << " "<<endl;
            evenSum = evenSum + num;
            countEven++;
        }
        else
        {
            // cout<<num <<" ";
            oddSum = oddSum + num;
            countOdd++;
        }
        num++;
    } while (num <= 100);

    // cout << evenSum <<endl;
    // cout << oddSum<<endl;

    // cout<<countEven<<" ";
    // cout<<countOdd<<" ";

    int evenAverage = evenSum / countEven;
    int oddAverage = oddSum / countOdd;

    cout << "The average of EVEN numbers from 1 to 100 is : " << evenAverage << endl;
    cout << "The average of ODD numbers from 1 to 100 is : " << oddAverage << endl;

    return 0;
}